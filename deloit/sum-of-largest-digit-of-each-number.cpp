#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i = 0 ; i < n ; i++){
    cin>>a[i];
  }

  int sum = 0;

  for(int i = 0 ; i < n ; i++){
    int ma  =0;
    while(a[i] > 0){
        // cout<<"som ";
        int temp = a[i]%10;
        if(temp>ma) ma=temp;
        a[i] = a[i]/10;
    }
    sum+=ma;
  }
  cout<<sum<<endl;

  return 0;
}