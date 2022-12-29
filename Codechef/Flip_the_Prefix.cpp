#include <bits/stdc++.h>
using namespace std;


int flipThePrefix(int n ,int k , string strIT  ){
    int mini = INT_MAX;
    int count = 0;
    int ourArr[n];
    for(int i=1;i<n;i++){
        if(strIT[i-1] != strIT[i]){
            count++;
            ourArr[i] = count;
        }else{
            ourArr[i] = count;
        }
    }
    ourArr[0] = 0;
    for(int i=n-1;i>=0;i--){
        if((i -(k-1))< 0){
            break;
        }
        int checker = ourArr[i] - ourArr[i-(k-1)];
        if(strIT[i] == '0') checker++;
        mini = min(mini, checker);
    }

    return mini;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
        int ans = flipThePrefix( n , k , s);
	    cout<<ans<<endl;
	}
	return 0;
}