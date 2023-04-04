#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s = "13542";
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout << s;
    return 0;
}