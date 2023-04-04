#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "goodmorning";
    cout << s << endl;
    s.insert(0,"bad");
    cout << s << endl;
    return 0;
}