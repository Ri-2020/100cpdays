#include<bits/stdc++.h>
using namespace std;

// ----- BOTTOM UP APPROACH -----

class Solution {
public:
    string longestPalindrome(string s) {
        short int n = s.size();
        short int i , j , k;
        vector<vector<short int>> a(n , vector<short int> (n,0));
        for(i = 0 ; i < n ; i++){
            a[i][i] = 1;
        }
        for(i = 0 ; i < n-1 ; i++){
            if(s[i] == s[i+1]){
                a[i][i+1] = 1;
            }
        }

        for(i = 0 ; i< n-2 ; i++){
             j = 0, k = i+2;
            while(k < n){
                if(a[j+1][k-1] and s[j] == s[k]){
                    a[j][k] = 1;
                }
                j++;
                k++;
            }
        }
        short int ma =0;
        short int st=0,en=0;

        for(i = 0 ; i < n ; i++){
            for(j = n-1; j >= i+1 ; j--){
                if(a[i][j] and j-i > ma){
                    a[i][j] = 1;
                    ma = j-i;
                    st=i;
                    en=j;
                    break;
                }
            }
            if(ma == n-1) break;
        }

        return s.substr(st , en-st+1);
    }
};