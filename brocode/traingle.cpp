#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float x = (float(a)* b)/2;
    float y = (float(c)*d)/2;

    if(x > y){
         cout << fixed << setprecision(1) << x;
    }else{
         cout << fixed << setprecision(1) << y;
    }
   
    
  
  return 0;
}