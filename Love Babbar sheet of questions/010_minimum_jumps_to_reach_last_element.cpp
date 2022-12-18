#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for (int ii = 0; ii < n; ++ii)

int minJumps(int arr[], int n)
{
    // Your code here

    vector<int> maxindex(n);
    for (int i = 0; i < n; i++)
    {
        maxindex[i] = min(i + arr[i], n - 1);
    }

    int count = 1;
    int maxreach = maxindex[0];
    int stepsLeft = maxindex[0];
    int i = 1;

    if (n <= 1)
    {
        return 0;
    }
    if (arr[0] == 0)
    {
        return -1;
    }
    while (i < n)
    {
        if (i == n - 1)
        {
            return count;
        }
        maxreach = max(maxreach, maxindex[i]);
        stepsLeft--;
        if (stepsLeft == 0)
        {
            count++;
            if (maxreach == i)
            {
                return -1;
                ;
            }
            stepsLeft = maxreach - i;
        }
        i++;
    }
}

int main()
{

    return 0;
}