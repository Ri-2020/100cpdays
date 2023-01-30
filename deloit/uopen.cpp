#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
}

int main(){


    int n , k ,p,y;
    cin>>n>>k>>p>>y;
    vector<pair< int , vector<int>>> a;

    for(int i = 0 ; i < n ; i++){
        vector<int> temp(k ,0);
        int sum = 0;
        for(int j = 0 ; i < n ; j++){
            cin>>temp[j];
            sum += temp[j];
        }
        cout<<sum<<" ";
        a.push_back(make_pair(   sum , temp ));
    }cout<<endl;


    int curr = 0;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; i < n ; j++){
           cout<<a[i].second[j];
        }
    }cout<<endl;

    sort(a.begin() , a.end());
    vector<int> x;
    int e = 0;
    for( int i = 0 ; i < p ; i++){
        for( int j = 0 ; j < k ; j++){
            x.push_back(a[i].second[j]);
            cout<<x[e++];
        }
    }
    sort(x.begin() , x.end());

    cout<<x[y-1]+1<<endl;

    return 0;

}