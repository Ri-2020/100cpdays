#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(n) for(int ii = 0; ii < n; ++ ii)

set<int> ds(set<int> &s , int k){
    set<int> temp;
    for( auto i: s){
        if( i != k){
            temp.insert(i);
        }
    }

    return temp;
}

set<int> is(set<int> &s , int k){
    set<int> temp;
    for( auto i: s){
        temp.insert(i);
    }
    temp.insert(k);
    return temp;
} 

bool checkMap(map<int , int> &m   ){
    for( auto i : m){
        if( i.second  > 1 ){
            return false;
        }
    }
    return true;
}

int fun(vector<int> &a , int k){
    int n = a.size();
    set<int> s;
    map<int , int> m;
    queue<int> q;
    int curr = 0;
    for( int i = 0 ; i < k ; i++){
        q.push(a[i]);
        // s.insert(a[i]);
        m[a[i]]++;
        curr += a[i];
    }
    int maxSum = 0;

    if( checkMap(m)){
        maxSum = curr;
    }
    // cout<<"curr: ";
    for( int i = k ; i< n ; i++){
        curr -= q.front();
            // s = ds(s , q.front());
        m[a[i]]++;
        m[q.front()]--;
        q.pop();
        q.push(a[i]);
        curr += a[i];
        if(checkMap(m)){
            maxSum = max(maxSum , curr);
        }
    }
    // cout<<endl;
    if( maxSum == 0){
        return -1;
    }
    return maxSum;
    
}

int main(){


    vector<int> a = {1,2,4,4};
    int k = 4;
    cout<<fun(a,  k);

  return 0;
}