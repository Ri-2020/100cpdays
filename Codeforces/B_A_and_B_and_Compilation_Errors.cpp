#include <iostream>
using namespace std;
int a[3], n, m, i, j;
main()
{
    cin >> n;
    for (i = 0; i < 3; i++)
        for (j = 0; j < n - i; j++)
            cin >> m, a[i] += m;
    cout << a[0] - a[1] << endl
         << a[1] - a[2];
}