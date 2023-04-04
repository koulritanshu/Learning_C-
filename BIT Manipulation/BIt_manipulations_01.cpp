#include <iostream>
using namespace std;

int getBit(int n,int pos){
    return (n & (1<<pos))!=0;
}
// setting means setting the bit at that position to 1.
int setBit(int n,int pos){
    return (n | (1<<pos));
}
// clearing means turning a bit to 0.
int clearBit(int n,int pos){
    return (n & (~(1<<pos)));
}
int main()
{
    int n,pos;
    cin >> n >> pos;
    cout << getBit(n,pos) << endl;
    cout << setBit(n,pos) << endl;  
    cout << clearBit(n,pos) << endl;
    return 0;
}