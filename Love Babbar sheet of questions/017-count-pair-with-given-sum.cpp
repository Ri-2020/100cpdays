//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
#define ll long long
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        
        map<int , int> m;
        for( int i = 0 ; i < n  ;i++){
            m[arr[i]] ++;
        }
        int ans =0;
        for( auto i : m){
            if( i.second < 0) continue;
            int x = k - i.first;
            
            if(x ==i.first ){
                ans += ((i.second*(i.second-1))/2);
                continue;
            }
            
            if( x < 0) continue;
            int a = i.second;
            int b = m[x];
            
            if(b < 0) continue;
            ans += (a*b);
            
            i.second  = -1;
            m[x] = -1; 
            
        }
        
        
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends