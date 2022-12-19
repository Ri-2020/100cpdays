//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            int p1=0 , p2=0, p3=0;
            while(p1<n1 and p2 < n2 and p3 < n3){
                
                if(A[p1]<B[p2]) p1++;
                else if(A[p1] > B[p2])p2++;
                
                if(A[p1] < C[p3]) p1++;
                else if(A[p1] > C[p3]) p3++; 
                
                if(B[p2] < C[p3]) p2++;
                else if(B[p2] > C[p3]) p3++;
                
                
                if(A[p1] == B[p2] and B[p2] == C[p3]){
                    ans.push_back(A[p1]);
                    int temp = A[p1];
                    
                    while(p1 < n1 and A[p1] == temp) p1++;
                    while(p2 < n2 and B[p2] == temp) p2++;
                    while(p3 < n3 and C[p3] == temp) p3++;
                    continue;
                }
            }
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends