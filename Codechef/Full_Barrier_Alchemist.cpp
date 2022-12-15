#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vl vector<ll>
#define pl pair<ll, ll>
#define rep(i, n) for (int i = 0; i < n; i++)
#define repi(i, x, n) for (int i = x; i < n; i++)
#define sort_vector(v) sort(v.begin(), v.end())
#define effin_out            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define check cout << "check 1 "
#define yes = cout << "YES" << endl
#define on = cout << "NO" << endl
int m = 1000000007;

ll log_2(ll x)
{
    return 64 - __builtin_clzll(x) - 1;
}
ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b = b / 2;
    }
    return res;
}
ll lcm(ll x, ll y)
{
    return ((x * y) / __gcd(x, y));
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
bool isPowerOfTwo(ll x)
{
    return x && (!(x & (x - 1)));
}
int count_Setbit(ll n)
{
    return (__builtin_popcountll(n));
}
string reverses(string s, int n)
{
    string a = s.substr(0, n);
    string b = s.substr(n, s.length());
    return string(a.rbegin(), a.rend()) + b;
}

int main()
{
    effin_out;
    int t;
    int n,h,y1 , y2 , l,type1_height, type2_height, count ,temp_type, temp_height;
    cin >> t;
    pair<int , int> temp;
    while (t--)
    {
        cin>>n>>h>>y1>>y2>>l;

        type1_height = h-y1;
        type2_height = y2;

        vector<pair<int, int>> barrier;

        rep(i , n){
            cin>>temp_type>>temp_height;
            barrier.push_back(make_pair(temp_type , temp_height));
        }

        count = 0;

        rep(i , n){
            temp = barrier[i];
            if(temp.first == 1){
                if( temp.second >= type1_height){
                    // cout<<"P1 ";
                    count++;
                } else if(l > 1){
                    // cout<<"L ";
                    l--;
                    count++;
                }else{
                    break;
                }
            }else{
                if(temp.second <= type2_height){
                    // cout<<"P2 ";
                    count++;
                }else if( l > 1){
                    // cout<<"L ";
                    l--;
                    count++;
                }else{
                    break;
                }
            }
        }


        cout<<count<<endl;

    }
    return 0;
}