#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    while(n<=1){
        cout << "Invalid Input. Enter valid value of n: ";
        cin >> n;
    }
    bool prime = 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            prime = 0;
            cout << n << " is not a prime number.";
            break;
        }
    }
    if (prime==1){
        cout << n << " is a prime number.";
    }
    return 0;
}