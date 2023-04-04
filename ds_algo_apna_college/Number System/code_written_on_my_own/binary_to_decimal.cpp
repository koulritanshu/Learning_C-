#include <iostream>
#include <cmath>
using namespace std;
void decimal(int binary_number){
    int decimal_number = 0;
    int i=0;
    while(binary_number){
        int ones_digit = binary_number % 10;
        if(ones_digit!=0&&ones_digit!=1){
            i = -1;
            cout << "Invalid Input.";
            break;
        }
        decimal_number += ones_digit*(pow(2,i));
        i++;
        binary_number/= 10;
    }
    if(i!=-1)
        cout << "Decimal number - " << decimal_number;
}

using namespace std;
int main()
{
    int binary_number;
    cout << "Enter the binary number: ";
    cin >> binary_number;
    decimal(binary_number);
    return 0;
}