#include <bits/stdc++.h>
using namespace std;

int Hexadecimaltodecimal(string n){
    int x=1,ans=0,size=n.size();
    for(int i=size-1;i>=0;i--){
        if(n[i]>='0'&&n[i]<='9')
            ans+=x*(n[i]-'0'); // n[i]-'0' converts '2' to 2
        else if(n[i]>='A'&&n[i]<='F')
            ans+=x*(n[i]-'A');
        x*=16;
    }
    return ans;
}

int main()
{
    string n;
    cout << "Enter hexadecimal number: ";
    cin >> n;
    cout << "Decimal Number: ";
    cout << Hexadecimaltodecimal(n);
    return 0;
}