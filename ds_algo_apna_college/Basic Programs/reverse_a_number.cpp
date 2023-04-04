#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int x=0;
    while(number){
        x = x * 10 + number % 10;
        number /= 10;
    }
    cout << "Reversed number -> " << x << endl;
    return 0;
}