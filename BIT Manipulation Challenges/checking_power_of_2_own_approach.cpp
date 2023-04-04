#include <iostream>
using namespace std;

int count_one(int n)
{
    int i = 1;
    int count = 0;
    while(i<=n)
    {
        if ((n&i)!=0)
            count++;
        i = i << 1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int no_of_one_bits = count_one(n);
    if (no_of_one_bits == 1)
        cout << "power of 2";
    else 
        cout << "-1";
    return 0;
}