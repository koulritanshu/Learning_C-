#include <iostream>
using namespace std;

int binarytodecimal(int n){
    int ans = 0;
    int x = 1;
    while(n){
        int y = n % 10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int main()
{
    int binary_number;
    cout << "Binary Number - ";
    cin >> binary_number;
    cout << endl << "Decimal Number - ";
    cout << binarytodecimal(binary_number);
    return 0;
}