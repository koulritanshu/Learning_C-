#include <bits/stdc++.h>
using namespace std;

void decimaltobinary(int n){
    int x = 1,ans = 0;
    while(x<=n){ // in order to take highest power of x
        x *= 2;
    }
    // even if highest power of x is reached, the loop will run one more time
    // because of which we need to divide x by 2
    x /= 2;
    // Now we need to convert another while loop in which we will change the
    // value of variable ans, the loop will run till x>0 because if highest power is 0
    // because x=0 means the highest number by which division is possible is 1 and 1 
    // can divide any number
    while(x){
        int lastDigit = n/x; // stores the quotient that is the first binary digit
        n -= lastDigit*x; // we need to decrease the number in order to obtain the other 
        // digits. Number is decreased by subtracting (divisor*quotient) from it
        x /= 2;
        // next highest power of 2 should be 1 less than current power
        ans = ans*10 + lastDigit;
    }
    cout << "Binary Number is " << ans;
}

int main()
{
    int decimal_number;
    cout << "Enter a decimal number: ";
    cin >> decimal_number;
    decimaltobinary(decimal_number);
    return 0;
}