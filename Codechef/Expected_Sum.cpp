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
#define yes  cout << "YES" << endl
#define no cout << "NO" << endl
int m = 998244353;

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

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Recursive function to return (x ^ n) % m
ll modexp(ll x, ll n)
{
    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        return modexp((x * x) % m, n / 2);
    }
    else {
        return (x * modexp((x * x) % m, (n - 1) / 2) % m);
    }
}

ll getFractionModulo(ll a, ll b)
{
    ll c = gcd(a, b);
 
    a = a / c;
    b = b / c;
 
    // (b ^ m-2) % m
    ll d = modexp(b, m - 2);
 
    // Final answer
    ll ans = ((a % m) * (d % m)) % m;
 
    return ans;
}

int main()
{
    effin_out;
    int t;
    cin >> t;
    while (t--)
    {
        ll a ,b;
        cin>>a>>b;
        ll n = a+b;
        ll A = a;
        ll B = b;
        ll N = n;
    int chefScore = 0; 
    int chefinaScore = 0; 
    srand(time(NULL)); 

    // Loop through all chits
    while (N > 0) {
        // Chef's turn
        int chit = rand() % N; // Pick a random chit
        if (chit < A) { // If chit has 11 written on it
        chefScore += 11; // Add 11 to chef's score
        A--; // Remove chit
        } else { // If chit has 00 written on it
        chefScore += 0; // Add 0 to chef's score
        B--; // Remove chit
        }
        N--; // Decrement number of remaining chits

        // Chefina's turn
        if (N > 0) { // If there are still chits left
        chit = rand() % N; // Pick a random chit
        if (chit < A) { // If chit has 11 written on it
            chefinaScore += 11; // Add 11 to chefina's score
            A--; // Remove chit
        } else { // If chit has 00 written on it
            chefinaScore += 0; 
            B--; 
        }
        N--; 
        }
    }

    int P = 2 * chefScore - chefinaScore; 
    int Q = 2; // Q = 2
    cout << "Expected score of Chef: " << P << "/" << Q << endl;

    }
    return 0;
}