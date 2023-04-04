#include <iostream>
using namespace std;

int one_bits(int n)
{
    int count=0,i=1;
    while(i<=n)
    {
        if((n&i)!=0) count++; i=i<<1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << one_bits(n); return 0;
}