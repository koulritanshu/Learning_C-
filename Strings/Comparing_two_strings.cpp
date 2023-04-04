#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "abc";
    string s2 = "xyz";
    if(s1.compare(s2)>0)
        cout << "s1 > s2";
    else if(s1.compare(s2)==0)
        cout << "s1==s2";
    else if(s1.compare(s2)<0)
        cout << "s1 < s2";
    return 0;
}