#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << __builtin_ctz(n); // counts trailing bits
    // for example 16 -> 10000 trailing bits = 4
    return 0;
}