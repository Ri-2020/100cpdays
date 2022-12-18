#include <bits/stdc++.h>
using namespace std;


string reverseWord(string str){
  int n = str.length();
  int start = 0;
  int end = n-1;
  while(start < end){
      char temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      start++;
      end--;
  }
  
  return str;
  
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
    return 0;
}