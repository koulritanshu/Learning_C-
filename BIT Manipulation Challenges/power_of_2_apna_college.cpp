#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==0)
    {
        cout << "-1";
        return 0;
    }
    int ans = n & (n-1);
    if(ans==0)
        cout << "power of 2";
    else 
        cout << "-1";
    return 0;
}

/*
case 1 -> n = 6 == 0110
          n-1 = 5 == 0101
    
b  
(n & n-1) have same bits except the rightmost set bit.

case -> n = 8 == 01000
        n-1 = 7 == 00111

(n & n-1) = 00000

therefore, for power of 2 n & n-1 must be equal to zero.
*/