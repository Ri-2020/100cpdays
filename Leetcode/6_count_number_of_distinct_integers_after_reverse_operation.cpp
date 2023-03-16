#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/description/


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

    int countDistinctIntegers(vector<int>& nums) {
        map<int , int> m;
        for(auto i: nums){
            m[i]++;
        }
        int ans =0;
        int temp;
        vector<int> a;
        for(auto i:m){
            temp = reverse(i.first);
            a.push_back(temp);
        }
        for(auto i:a){
            m[i]++;
        }
        return m.size();
    }
};