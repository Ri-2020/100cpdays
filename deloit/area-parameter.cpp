#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,g,h;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;
    cin>>g>>h;
    int xa =a , xb;
    if(a == c){
        xb = g;
    }else{
        xb = c;
    }
    int side = abs(xa -xb);

    cout<<side*side<<" "<<4*side;

    return 0;
}   