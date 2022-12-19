#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)


vector<int> duplicates(int arr[], int n) {
    vector<int> temp(100004);
    for(int i = 0 ; i < n ; i++){
        temp[arr[i]]++;
    }
    vector<int> a;
    for(int i = 0 ; i < 100004 ; i++){
        if(temp[i] > 1){
            a.push_back(i);
        }
    }
    
    if(a.empty()){
        return {-1};
    }else{
        return a;
    }
}

int main(){
  int t;
  cin>>t;
  
  return 0;
}