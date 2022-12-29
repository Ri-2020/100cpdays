#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n = s.length();
    queue<int> o;
    stack<int> e;
    for(int i = 0 ; i < n ; i++){
        if((s[i]-'0')%2){
            o.push(s[i]-'0');
        }else{
            e.push(s[i]-'0');
        }
    }
    while(!o.empty()){
        cout<<o.front();
        o.pop();
    }

    while (!e.empty())
    {
        cout<<e.top();
        e.pop();
    }

    cout<<endl;
  }
  return 0;
}