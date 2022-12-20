//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Funct ion to check whether there is a subarray present with 0-sum or not .
    bool subArrayExists(int arr[], int n)
    {
        int k=0;
        int prefix_sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)  {
            prefix_sum+=arr[i];
            if(prefix_sum==k) return true;
              else{
                if(m[prefix_sum-k]) return true;
                else{
                    m[prefix_sum]++;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends