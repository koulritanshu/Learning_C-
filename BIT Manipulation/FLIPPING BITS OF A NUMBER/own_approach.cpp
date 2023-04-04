#include <bits/stdc++.h>
using namespace std;

int pos_of_msb(int n)
{
    int i=n,count=0;
    while(i)
    {
        count++;
        i = i>>1;
    }
    return count;
}

int toggle_all_bits(int n)
{
    int pos = pos_of_msb(n);
    int i=0;
    while(i<pos)
    {
        n = n xor (1<<i);
        i++;
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    // firstly calculate position of M.S.B
    // then we will toggle all the bits of the input number
    int answer = toggle_all_bits(n);
    cout << answer;
}