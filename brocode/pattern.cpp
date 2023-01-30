#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)


void pattern1(int n){
    for(int i = 0 ; i < n ; i++){
        for( int j = 0 ; j< n ; j++){
            if( j == 0 or j == n-1 or i == j or i == n-1-j) {
                cout<<"*";
                continue;
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
  
  int n = 50;
  pattern1(n);
  return 0;
}