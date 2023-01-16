#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int ii = 0; ii < n; ++ ii)

int parseDate(const string& date)
{
    // Split the date string by '/'
    size_t pos = date.find('/');
    string dayStr = date.substr(0, pos);
    string monthStr = date.substr(pos + 1, date.size() - pos - 6);
    string yearStr = date.substr(date.size() - 4);
    int day = stoi(dayStr);
    int year = stoi(yearStr);

    map<string, int> months = {
        {"January", 1},
        {"February", 2},
        {"March", 3},
        {"April", 4},
        {"May", 5},
        {"June", 6},
        {"July", 7},
        {"August", 8},
        {"September", 9},
        {"October", 10},
        {"November", 11},
        {"December", 12}
    };
    int month = months[monthStr];


    return day + (month-1)*30 + year*30*12;

    return make_pair(day, year);
}

int dateDiff(const string& date1, const string& date2)
{
    // Parse the dates
    int d1 = parseDate(date1);
    int d2 = parseDate(date2);


    return d1-d2;

}
int main(){
  string a = "12/December/2022";
  string b = "13/Noverber/2023";

  int x = dateDiff(b, a);
  cout<<x<<endl;

  
  return 0;
}