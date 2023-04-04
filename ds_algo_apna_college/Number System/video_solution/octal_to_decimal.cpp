#include <iostream>
using namespace std;

int OctalToDecimal(int n){
    int ans=0,x = 1;
    while(n){
        int y = n % 10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Octal Number - ";
    cin >> n;
    cout << endl << "Decimal Number - ";
    cout << OctalToDecimal(n);
    return 0;
}