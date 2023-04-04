#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    int greatest = max(a,max(b,c));
    cout << greatest;
    return 0;
}