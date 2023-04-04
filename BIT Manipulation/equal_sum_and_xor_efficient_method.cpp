// answer will be 2^(no of unset bits)
#include <bits/stdc++.h>
using namespace std;

int unset_bits(int n)
{
    int count=0,i=1;
    while(i<=n)
    {
        if((n&i)==0)
            count++;
        i=i<<1;
    }
    return count;
}

int no_of_unset_bits(int n)
{
    return pow(2,unset_bits(n));
}

int main()
{
    int n;
    cin >> n;
    cout << no_of_unset_bits(n);
    return 0;
}