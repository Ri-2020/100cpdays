
// UNSOLVED
#include <bits/stdc++.h>

using namespace std;

int partition(int arr[],int l, int r, int fromStart){
    int i= l-1;
    int pivot = arr[r];
    for(int j=0;j<r;j++){
        if(pivot >= arr[j]){
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = temp;
    return i + 1 +fromStart;
}

int quick(int arr[], int l, int r, int k, int fromStart){
    if(r>=l){
        int par = partition(arr,l, r, fromStart);
        if(par+1 == k){
            return par;
        }else if(par+1 > k){
            return quick(arr, l, par -1, k, fromStart);
        }else{
            return quick(arr, par + 1, r, k, fromStart + par+1);
        }
    }else{
        return -1;
    }
}


int main()
{
    // cout<<"Hello World";
    int arr[] = {12, 5, 787, 1, 23};
    int i = quick(arr, 0, 4, 2, 0);

    return 0;
}

