#include <bits/stdc++.h>
using namespace std;


int main()
{
    
    
    int n ,m,temp,a ;
    cin>>n>>m;

    for(int i = 0 ; i < n ; i++){
        
        temp = INT_MIN;
        for(int j = 0 ; j < m ; j++){
            cin>>a;
            if(a>temp){
                temp = a;
            }
        }
        cout<<temp<<" ";
    }
    return 0;
}