#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=20;
    int *ptr=&a;
    cout << a << " " << ptr << endl;
    *ptr = 10;
    cout << a  << " " << *ptr << " " << ptr;
    return 0;
}