#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vl vector<ll>
#define ms(a) memset(a,0,sizeof(a))
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
    int n;
	cin>>n;
	vi a(n);
	map<int , int> m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}



	int ans =0;

	if(m[4] > 0){
		ans += m[4];
		m[4] = 0;
	}
	// cout<<"4: ";
	// rep(i ,4){
	// 	cout<<m[i+1]<<" ";
	// }cout<<ans<<endl;

	if(m[3] > 0){
		if(m[1] >= m[3]){
			ans += m[3];
			m[1] = m[1] - m[3];
		}
		else{
			ans += m[1];
			m[3] -= m[1];
			ans += m[3];
			m[1] = 0;
		}
		m[3] = 0;
	}
	// cout<<"3: ";
	// rep(i ,4){
	// 	cout<<m[i+1]<<" ";
	// }cout<<ans <<endl;

	if(m[2] > 0){
		ans += m[2] /2;
		int temp = m[2]%2;
		if(temp){
			if(m[1] > 1){
				m[1] -= 2;
				m[2] =0;
			}else if(m[1] == 1){
				m[1] =0;
				m[2] =0;
			}else{
				m[2] =0;
			}
			ans += 1;
		}
	}
	// cout<<"2: ";
	// rep(i ,4){
	// 	cout<<m[i+1]<<" ";
	// }cout<<ans<<endl;
	if(m[1] > 0){
		ans += m[1]/4;
		int x = m[1]%4;
		if(x){
			ans+=1;
		}
	}
	// cout<<"1: ";
	// rep(i ,4){
	// 	cout<<m[i+1]<<" ";
	// }cout<<ans<<endl;

	cout<<ans<<endl;



	
    return 0;
}