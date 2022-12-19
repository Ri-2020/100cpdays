#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for (int ii = 0; ii < n; ++ii)

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int i = n - 1, j = 0;

    while (i >= 0 and j < m)
    {
        if (arr1[i] >= arr2[j])
        {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{

    return 0;
}