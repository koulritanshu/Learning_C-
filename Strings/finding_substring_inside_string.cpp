#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "hello";
    cout << s.find("he") << endl;
    cout << s.find("lo") << endl;
    cout << s.find('z');
    return 0;
}