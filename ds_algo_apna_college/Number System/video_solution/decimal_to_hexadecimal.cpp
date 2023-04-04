#include <bits/stdc++.h>
using namespace std;

void decimaltohexadecimal(int n){
    int x = 1;
    string ans = "";
    while(x<=n)
        x *= 16;
    x /= 16;
    while(x){
        int lastDigit = n/x;
        n -= lastDigit * x;
        x /= 16;
        if(lastDigit <= 9)
            ans = ans + to_string(lastDigit);
        else if(lastDigit >= 10 && lastDigit <= 15)
            ans.push_back('A'+lastDigit - 10);
    }
    cout << "Hexadecimal Number is " << ans;
}

int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    decimaltohexadecimal(n);
    return 0;
}