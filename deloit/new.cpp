#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a;
    for( int i = 1 ; i < 999 ; i+=3){
        a.push_back(i);
        a.push_back(i+2);
        a.push_back(i+1);
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp = n%3;
        int x = n-temp;
        for(int i = 0 ; i < x ; i++){
            cout<<a[i]<<" ";
        }
        if(temp ==1){
            cout<<n<<endl;
            continue;

        }else if(temp == 2){
            cout<<n<<" "<<n-1<<endl;
            continue;
        }
        cout<<endl;
    }
    return 0;
}