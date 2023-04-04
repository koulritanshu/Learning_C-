#include <iostream>
using namespace std;

int invert_bits(int n)
{
    int i = n;
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    return (n xor i); 
}

int main()
{
    int n;
    cin >> n;
    cout << invert_bits(n);
    return 0;
}