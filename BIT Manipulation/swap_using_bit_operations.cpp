#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
    *a = *a^*b; 
    *b = *b^*a;
    *a = *a^*b;
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    swap(&a,&b);
    cout << a << " " << b << endl;
    return 0;
}

/*
for example

a = 2 and b = 4
a = a^b = 0010^0100 = 0110 = 6
b = b^a = 0100^0110 = 0010 = 2
a = a^b = 0110^0010 = 0100 = 4
now, a = 4 and b = 2
*/
