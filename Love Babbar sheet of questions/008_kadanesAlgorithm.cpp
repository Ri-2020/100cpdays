#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)

long long KadanesAlgorithm(int arr[], int n){
    long long current = 0;
    long long maxall= -10000004;
    long long maxnow =-10000004;
    for( int i = 0 ; i < n ; i++){
        current+=arr[i];
        if( maxnow < current){
            maxnow = current;
        }
        if(maxall < maxnow){
            maxall = maxnow;
        }
        if( current < 0){
            current = 0;
            maxnow = -10000004;
        }
    }
    return maxall;
}

int main(){
  
  return 0;
}