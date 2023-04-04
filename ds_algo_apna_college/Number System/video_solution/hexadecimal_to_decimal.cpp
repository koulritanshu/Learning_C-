#include <bits/stdc++.h>
using namespace std;

int HexadecimalToDecimal(string n)
{
    int size = n.size(), x = 1, ans = 0;

    for (int i = (size - 1); i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
            ans += x * (n[i] - '0');
        else if (n[i] >= 'A' && n[i] <= 'F')
            ans += x * (n[i] - 'A' + 10);

        x *= 16;
    }
    return ans;
}

int main()
{
    string hexadecimal_no;
    cout << "Enter a hexadecimal number: ";
    cin >> hexadecimal_no;
    cout << "Decimal Number: ";
    cout << HexadecimalToDecimal(hexadecimal_no);
    return 0;
}