#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int sum = 0;
  int x[n];
  for(int i = 0 ; i < n ; i++){
    cin>>x[i];
    cout<<x<<endl;
  }
  
  for(int i = 0 ; i < n ; i++){
    if(x[i] < 0){
        sum+= x[i];
    }
    
  }
  

  cout<<sum<<endl;
  return 0;
}