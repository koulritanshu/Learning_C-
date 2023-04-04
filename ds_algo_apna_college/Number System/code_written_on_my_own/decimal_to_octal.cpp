#include <iostream>
using namespace std;
int main()
{
    int d_no;
    int arr[50];
    int i = 0;
    cout << "Enter a decimal number: ";
    cin >> d_no;
    while(d_no){
        arr[i] = d_no % 8;
        i++;
        d_no /= 8;
    }
    int first_digit = 0;
    cout << "Octal Number - ";
    int size_of_arr = sizeof(arr)/sizeof(int);
    for(int i=(size_of_arr-1);i>=0;i--){
        if(first_digit == 0 && arr[i]==1)
            first_digit = 1;
        if(first_digit == 1)
            cout << arr[i];
    }
    return 0;
}