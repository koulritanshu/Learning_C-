#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "abcdefghijkl";
    cout << s << endl;
    // s.erase(3);
    // This will erase all characters appearing after d in string s
    s.erase(3,7);
    // This will erase 7 characters following d in string s
    cout << s << endl;
    return 0;
}