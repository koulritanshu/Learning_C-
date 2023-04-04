#include <iostream>
using namespace std;

int toggle_bit(int n,int pos)
{     
    return (n xor (1<<pos));
}

int main()
{
    int n,pos;
    cin >> n >> pos;
    cout << toggle_bit(n,pos);
    return 0;
}