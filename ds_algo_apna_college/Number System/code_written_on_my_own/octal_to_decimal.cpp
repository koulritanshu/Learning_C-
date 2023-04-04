#include <iostream>
#include <cmath>
using namespace std;

void decimal(int octal_number){
    int decimal_number=0,i=0;
    while(octal_number){
        int mod = octal_number % 10;
        decimal_number += mod*(pow(8,i));
        i++;
        octal_number /= 10;
    }
    cout << "Decimal Number -> " << decimal_number;
}

int main()
{
    int octal_number;
    cout << "Enter an octal number: ";
    cin >> octal_number;
    decimal(octal_number);
    return 0;
}