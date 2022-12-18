#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> x;
        for(int i = 0 ; i < n;  i++){
            x.insert(a[i]);
        }
        for(int i = 0 ; i < m;  i++){
            x.insert(b[i]);
        }
        
        return x.size();
        
    }

int main(){
  
  return 0;
}