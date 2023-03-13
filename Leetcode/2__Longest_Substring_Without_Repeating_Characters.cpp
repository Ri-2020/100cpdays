#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n < 2) return n;
        int ma = 0;
        int i = 0;
        int j = 0;
        int curr = 0;
        unordered_map<char , pair<int, int>> m;
        while(j < n){
                m[s[j]].first ++;
                if(m[s[j]].first == 2){
                    m[s[j]].first = 1;
                    int temp = m[s[j]].second;
                    i = m[s[j]].second+1;
                    m[s[j]].second = j;
                    for(auto it = m.cbegin() ; it != m.cend();  ){
                        if(it->second.second >= temp){
                            ++it;
                        }else{
                            m.erase(it++);

                        }
                    }
                    ma = max(curr , ma);
                    curr = j-i+1;
                }else{
                    m[s[j]].second = j;
                    curr++;
                    ma = max(curr , ma);
                }

                j++;
        }
        return ma;
    }
};
