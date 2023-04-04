#include <iostream>
using namespace std;

int get_bit(int n,int pos){
    return (n&(1<<pos))!=0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int xor_all = 0;
    for(int i=0;i<n;i++)    xor_all = xor_all xor arr[i];
    int msb = -1;
    int i = xor_all;
    while(i){
        msb++;
        i = i >> 1;
    }
    int first_unique_no = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int check = get_bit(num,msb);
        if(check){
            first_unique_no ^= num;
        }
    }
    int second_unique_number = first_unique_no ^ xor_all;
    cout << first_unique_no << " " << second_unique_number << endl;
    return 0;
}