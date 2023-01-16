#include<bits/stdc++.h>
using namespace std;

int sol(int n , int m){
    vector<int > ans;
    int sum = 0;
    for(int i = 0 ; i < m-n+1 ; i++){
        int temp = i+n;
        int ma = 0;
        sum = 0;
        while(temp >0){
            int x = temp%10;
            sum += x;
            ma = max(ma , x);
            temp = temp/10;
        }
        if(sum -ma == ma) ans.push_back(i);

    }
    sum = 0;
    for(auto i : ans){
        sum += i;
        cout<<i<<" ";
    }cout<<endl;

    return sum;
}

int main(){
  int n , m;
  cin>>n>>m;
  cout<<sol(n ,m);
  
  return 0;
}