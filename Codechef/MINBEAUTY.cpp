#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)


void printVec(vector<int>& a){
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    iota(a.begin() , a.end() , 1);
    reverse(a.begin() , a.end());
    if(n %2){
        int temp = (n-1)/2 ;
        swap(a[temp] , a[0]);
    }
    printVec(a); 
  }
  return 0;
}