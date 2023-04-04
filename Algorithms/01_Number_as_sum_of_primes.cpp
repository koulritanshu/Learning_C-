#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n){
    if(n==2)
        return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int check = 0;
    for(int i=2;i<=number/2;i++){
        if(check_prime(i)){
            if(check_prime(number-i)){
                cout << i << " " << number-i << endl;
                check = 1;
            }
        }
    }
    if(check!=1)
        cout << "Number can't be expressed as sum of primes.";
    return 0;
}