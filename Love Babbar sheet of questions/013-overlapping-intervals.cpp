#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)

vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
    // Code here
        
    sort(intervals.begin() , intervals.end());
    vector<vector<int>> ans;
    
    int n = intervals.size();
    
    
    // if only one interval is giver
    if(n == 1) return intervals;
    
    int f= intervals[0][0];
    
    int running = intervals[0][1]; 
    //running keeps the data of the current maximum closing time
    for(int i = 1 ; i <n ; i++){
        
        if(running >= intervals[i][0] ){
            running = max(running , intervals[i][1]);
            continue;
        }else{
            
            ans.push_back({f ,running });
            f = intervals[i][0];
            running = intervals[i][1];
        }
    }
    
    ans.push_back({f , running});
    
    return ans;
        
}

int main(){
  
  return 0;
}