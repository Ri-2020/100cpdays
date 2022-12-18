#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)


void sort012(int a[], int n)
    {

        int zero = 0 , one = 0 , two = 0;
        for(int i = 0 ; i < n ; i++){
            if( a[i] == 0){
                zero++;
            }else if(a[i] == 1){
                one++;
            }else two++;
        }
        
        
        for(int i = 0 ; i < zero ; i ++){
            a[i] = 0;
        }
        
        for( int i = zero ; i < one+zero  ;i++){
            a[i] =1;
        }
        
        for( int i = zero+one ; i< zero + one+two ; i++){
            a[i] = 2;
        }
    }

int main(){
  int t;
  cin>>t;
  
  return 0;
}