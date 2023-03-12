#include<bits/stdc++.h>
using namespace std;


// kinda heighest frequency nikalni hai


int minimumpockets(int N , int A[]){

    int arr[1001];
    for(int i = 0 ; i < 1001 ; i++){
        arr[i] = 0;
    }
    for(int i = 0 ; i < N ; i++){
        arr[A[i]]++;
    } 

    int result = 0;

    for(int i = 0 ; i < 1001 ; i++){
        if(arr[i] > result) result = arr[i];
    }

    return result;
    
}

int main(){
    
    cout<<"Wroking fine";
  return 0;
}