// Algorithm - Divide by 2 and then store the remainders in an array and print the array
//             in reverse order.


#include <iostream>
#include <cmath>
using namespace std;

int find_remainder(int decimal_number){
    return decimal_number % 2;
}

int main()
{
    int arr[50];
    int decimal_number;
    cout << "Enter a decimal number: ";
    cin >> decimal_number;
    int i = 0;
    while(decimal_number){
        arr[i] = find_remainder(decimal_number);
        i++;
        decimal_number /= 2;
    }
    int size_of_arr = sizeof(arr)/sizeof(int);
    int first = 0;
    cout << "Binary number: ";
    for(int j = (size_of_arr - 1);j>=0;j--){
        if(arr[j]==1 && first == 0)
            first = 1; 
        if(first==1)
            cout << arr[j];
    }
    return 0;
}