//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:

	long long maxProduct(vector<int> arr, int n) {
	    long long minVal = arr[0];
        long long maxVal = arr[0];
        long long maxProduct = arr[0];
    
        for (int i = 1; i < n; i++) {
            if (arr[i] < 0)
                swap(maxVal, minVal);
    
            maxVal = max<long long>(arr[i], maxVal * arr[i]);
            minVal = min<long long>(arr[i], minVal * arr[i]);
    
            maxProduct = max(maxProduct, maxVal);
        }
    
        return maxProduct;
	    
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends