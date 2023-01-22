#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  map<int , int> m;
  for(int i = 0 ; i < n ; i++){
    cin>>a[i];
    m[a[i]]++;
  }
  vector<int> ans(n);
  for(int i = 0 ; i < n ; i++){
    ans[i] = n - m[a[i]];
    cout<<ans[i]<<" ";
  }cout<<endl;

  return 0;
}