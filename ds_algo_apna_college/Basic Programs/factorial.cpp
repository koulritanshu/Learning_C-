#include <iostream>
using namespace std;

long long int factorial(int num){
    if (num==0||num==1)
        return 1;
    else return num * factorial(num-1);
}


int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    while(num<0){
        cout << "Invalid input. Enter number: ";
        cin >> num;
    }
    cout << "Factorial="<<factorial(num);
    return 0;
}