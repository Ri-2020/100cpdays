//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long merge(long long arr[] , long long lo , long long mid , long long hi){
        long long temp[hi -lo +1], pos = 0;
        long long ptr1 = lo;
        long long ptr2 = mid+1;
        long long conv = 0;
        
        while(ptr2<=hi and ptr1 <= mid){
            if(arr[ptr2] < arr[ptr1]){
                temp[pos++] = arr[ptr2++];
                conv += (mid-ptr1 +1);
            }else{
                temp[pos++] = arr[ptr1++];
            }
        }
        
        while(ptr1 <= mid){
            temp[pos++] = arr[ptr1++];
        }
        
        while(ptr2 <= hi){
            temp[pos++] = arr[ptr2++];
        }
        
        for( int i = 0 ; i < pos ; i++){
            arr[i + lo] = temp[i]; 
        }
        
        return conv;
    }
    
    
    long long mergeSort(long long arr[] , long long left , long long right){
        if(left >= right) return  0;
        long long mid = (left + right)/2;
        long long conv = mergeSort(arr, left , mid);
        conv += mergeSort(arr, mid+1 , right);
        conv += merge(arr , left , mid , right);
        return conv;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        
        return mergeSort(arr, 0 , N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends