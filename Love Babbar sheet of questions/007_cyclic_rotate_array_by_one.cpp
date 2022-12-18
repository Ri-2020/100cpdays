#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)

void rotate(int arr[], int n){
    
    int last = arr[n-1];
    int i = n-1;
    while( i > 0){
        arr[i] = arr[i-1];
        i--;
    }
    
    arr[i] = last;
}

int main(){
  int t;
  cin>>t;
  
  return 0;
}