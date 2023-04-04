#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "NAJnavnBIAWBnjad";
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z')
            s[i] += 32;
    }
    cout << s;
    return 0;
}