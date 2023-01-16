#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)

int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b,c;
    cin>>a>>b>>c;
    for(int i = 2 ; i< 100 ; i++){
        if(a%i != 0 and b%i != 0 and c%i!= 0 ){
            cout<<i<<endl;
            break;
        }
    }
  }
  return 0;
}