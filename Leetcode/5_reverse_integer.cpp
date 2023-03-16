#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/reverse-integer/description/

class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        if(x<0){
            sign = -1;
            x = abs(x);
        }  

        string s="";

        while(x){
            int temp = x%10;
            s += temp + '0';
            x = x/10;
        }

        int n = s.size();
        for(int i = 0 ; i < n/2 ; i++){
            s[i] , s[n-1-i] = s[n-1-i] , s[i];
        }

        long long res = 0;
        for(int i = 0 ; i < n ; i++){
            res*=10;
            res += s[i]- '0';
        }

        if(res > INT_MAX or res<INT_MIN) return 0;

        return sign *res;
    }
};