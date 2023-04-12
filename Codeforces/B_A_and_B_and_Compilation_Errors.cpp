#include <iostream>
using namespace std;
int a[3], n, m, i, j;
int main()
{
    cin >> n;
    for (i = 0; i < 3; i++)
        for (j = 0; j < n - i; j++)
            cin >> m, a[i] += m;

    int f= a[0] - a[1];
    int s= a[1] - a[2];

    if(f < s)
    cout << f <<" "<<s;
    else{
        cout << s <<" "<<f;
    }
}