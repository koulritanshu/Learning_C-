#include <iostream>
using namespace std;

int count_bits(int n)
{
    int count=0,i=1;
    while(i<=n)
    {
        if((n & i) == 0) // remember to keep n&i in brackets -> (n&i)
        {                 // BECAUSE OF HIERARCHY
            count++;
        }
        i = i << 1;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << count_bits(n);
    return 0;
}