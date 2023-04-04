/*
Using for loops, we can do this
or by using formula n*(n+1)/2

Solution of this problem using functions
*/
#include <iostream>
using namespace std;
int nat(int n){
    if(n==1)
        return 1;
    else
        return n + nat(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << nat(n);
    return 0;
}