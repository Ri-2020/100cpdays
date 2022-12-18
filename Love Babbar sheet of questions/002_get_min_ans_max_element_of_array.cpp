#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)

pair<long long, long long> getMinMax(long long a[], int n) {
    long long ma = 0;
    long long mi = 1000000000002;
    for(int i = 0 ; i < n ; i++){
        if(a[i] < mi) mi = a[i];
        if(a[i] > ma) ma = a[i];
    }
    
    
    return make_pair(mi , ma);
}

int main(){
  
  
  return 0;
}