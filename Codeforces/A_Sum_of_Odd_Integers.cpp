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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
    cin >> t;
    vector<long long> dp;
    int x = 1;
    dp.push_back(1);
    int i = 0;
    while (x < 10000001)
    {
        x += 2;
        dp.push_back(dp[i] + x);
        i += 1;
    }
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        // if((k*k)<=n && (n+k)%2==0) cout<<"YES\n";
        // else  cout<<"NO\n";

        if (k == 1)
        {
            if (n % 2)
                yes;
            else
                no;
            continue;
        }
        if ((k % 2) and n % 2 == 0)
        {
            no;
            continue;
        }
        if ((k % 2) == 0 and n % 2 == 1)
        {
            no;
            continue;
        }
        long long odd = 2 * (k - 1) - 1;
        long long sum = dp[k - 2];
        long long remain = n - sum;
        if (remain % 2 == 0 or remain <= odd)
        {
            no;
            continue;
        }
        yes;
    }
    return 0;
}