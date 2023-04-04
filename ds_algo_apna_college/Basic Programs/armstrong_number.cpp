#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int temp = number;
    int x = 0;
    while(number){
        x += (number%10)*(number%10)*(number%10);
        number = number/10;
    }
    if (x==temp)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";
    return 0;
}