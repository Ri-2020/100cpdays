//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      vector<int> a(100001);
      for(int i = 0 ; i < N ; i++){
          a[arr[i]] = 1;
      }
      int curr = 0;
      int ma = 0;

      for(int i = 0 ; i < 100001 ; i++){
          if(a[i] == 0){
              ma = max(curr , ma);
              curr = 0;
          }else curr++;
      }
      
      ma = max(ma , curr);
      return ma;
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends