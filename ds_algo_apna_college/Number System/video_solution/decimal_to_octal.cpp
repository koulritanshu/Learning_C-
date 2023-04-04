#include <bits/stdc++.h>
using namespace std;

void decimaltooctal(int n){
    int x=1,ans=0;
    while(x<=n){
        x *= 8;
    }
    x/=8;
    while(x){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 8;
        ans = ans*10 + lastDigit;
    }
    cout << "Octal Number is "<< ans;
}

int main()
{
    int decimal_number;
    cout << "Enter a decimal number: ";
    cin >> decimal_number;
    decimaltooctal(decimal_number);
    return 0;
}