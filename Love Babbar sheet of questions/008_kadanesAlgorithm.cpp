#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)

long long KadanesAlgorithm(int arr[], int n){
    long long current = 0;
    long long maxall= -10000004;
    long long maxnow =-10000004;
    for( int i = 0 ; i < n ; i++){

        // ADD TO CURRENT
        current+=arr[i];

        // UPDATE MAX NOW
        if( maxnow < current){
            maxnow = current;
        }


        // UPDATE MAX ALL
        if(maxall < maxnow){
            maxall = maxnow;
        }


        // CHECK FOR CURRENT NEGATIVITY
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