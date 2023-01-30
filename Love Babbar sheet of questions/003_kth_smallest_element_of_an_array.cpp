#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        vector<int> a(100050);
        int n = r+1;
        for( int i = 0 ; i < n ; i++){
            a[arr[i]] = 1;
        }
        
        int count = 0;
        for( int i = 0; i < 100050; i++){
            if(a[i]){
                count++;
            }if(count == k){
                return i;
            }
        }
        
    }
};

int main(){
  
  return 0;
}