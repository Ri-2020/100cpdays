
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> factorial(int N){
        deque<int> a;
        a.push_back(1);
        for(int i = 1 ; i <= N ; i++){
            int carry = 0;
            for(auto j = a.rbegin() ; j!=a.rend() ; j++){
                int temp = (*j)*i;
                temp = temp+carry;
                *j = temp%10;
                carry = temp/10;
            }
            
            while(carry){
                a.push_front(carry%10);
                carry = carry/10;
            }
        }
        vector<int> b;
        for(auto i: a){
            b.push_back(i);
        }
        return b;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends