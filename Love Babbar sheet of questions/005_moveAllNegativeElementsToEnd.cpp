#include<bits/stdc++.h>
using namespace std;

// Move all negative elements to end
void segregateElements(int arr[],int n)
    {
        vector<int> a;
        vector<int> b;
        for( int i =0; i < n ; i++){
            if(arr[i] < 0){
                a.push_back(arr[i]);
            }else{
                b.push_back(arr[i]);
            }
        }
        
        b.insert(b.end() , a.begin() , a.end());
        
        for(int i = 0 ; i< n ; i++){
            arr[i] = b[i];
        }
    }

int main(){
  int t;
  cin>>t;
  
  return 0;
}