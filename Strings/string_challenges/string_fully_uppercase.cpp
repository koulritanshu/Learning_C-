#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "BaUnnkQRkjnRnk";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z')
            s[i] -= 32; // converting entirely into uppercase
    }
    cout << s;
    return 0;
}