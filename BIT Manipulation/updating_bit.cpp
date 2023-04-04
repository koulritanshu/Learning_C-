#include <iostream>
using namespace std;

int update_bit(int n,int pos,int new_b){
    // firstly clear the bit at position pos
    n = n & (~(1<<pos)); // cleared bit
    // now set a new bit.
    return n | (new_b<<pos);
}
int main()
{
    int n,pos,new_b;
    cout << "Enter the binary number: ";
    cin >> n;
    cout << "Enter the position: ";
    cin >> pos;
    cout << "Enter the new binary digit: ";
    cin >> new_b;
    cout << update_bit(n,pos,new_b);
    return 0;
}
