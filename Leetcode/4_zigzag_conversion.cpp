#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/zigzag-conversion/description/

class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1) return s;
        if(numRows == 2){
            string o = "";
            string e = "";
            for(int i =0 ; i < s.size() ; i++){
                if(i%2){
                    o+= s[i];
                }else{
                    e+= s[i];
                }
                
            }
            return e+o;
        }
        vector<vector<char>> v(numRows , vector<char> (s.size() , ' ') );

        int j = 0;
        int k = 0;
        bool isDiagonal = 0;

        for(int i = 0 ; i < s.size() ; i++){
            if(isDiagonal == 0){
                v[j][k] = s[i];
                j++;
                if(j == numRows){
                    isDiagonal =1;
                    k++;
                    j-=2;
                }
            }
            else{
                v[j][k] = s[i];
                j--;
                k++;

                if(j == 0){
                    isDiagonal = 0;
                }
            }
        }

        string res = "";
        for(auto i: v){
            for(auto j:i){
                if(j!= ' '){
                    cout<<j;
                    res+=j;
                }
            }
        }


        return res;

    }

    
};