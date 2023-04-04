#include <iostream>
using namespace std;

int change_bit(int n,int pos,int new_n){
    if(new_n == 1){
        return n | (1<<pos);
    }
    else if(new_n == 0){
        return (n&(~(1<<pos)));
    }
}

int main()
{
    int n,pos,new_n;
    cin >> n >> pos >> new_n;
    cout << change_bit(n,pos,new_n);
    return 0;
}