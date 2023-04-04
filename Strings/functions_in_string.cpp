#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Appending a string
    string str = "demo";
    string s1 = "fam";
    string s2 = "ily";
    cout << s1+s2<<endl;
    s1.append(s2);
    cout << s1 << endl;
    cout << s1[2] << endl;
    // Clearing a string
    str.clear();
    cout << str;
    // Checking whether a string is empty or not
    if(str.empty())
        cout << "String is empty";
    else 
        cout << "String is not empty";
    return 0;
}