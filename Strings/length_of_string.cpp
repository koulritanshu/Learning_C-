#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "abcdefghijkl";
    cout << s.size() << " " << s.length() << endl;
    // printing all the elements of the string
    for(int i=0;i<s.length();i++){
        cout << s[i] << endl;
    }
    string s1 = s.substr(6,4);
    cout << s1;
    return 0;
}