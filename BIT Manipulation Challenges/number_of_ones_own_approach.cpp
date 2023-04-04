#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 0;
    while(i<=n)
    {
        if((i & n) != 0)
            count++;
        i = i << 1;
    }
    cout << count;
    return 0;
}