#include<bits/stdc++.h>
using namespace std;

int main(){
  string a,b;
  cin>>a;
  cin>>b;
  int n = a.length();
  int ans = 0;

  for(int i = 0; i < n ; i++){
    ans += (a[i]-'a') - (b[i]-'a');
  }

    cout<<ans<<endl;
  return 0;
}