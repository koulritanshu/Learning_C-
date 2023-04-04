#include <iostream>
using namespace std;
int getbit(int n,int pos){
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
    for(int i=0;i<n;i++){
        xor_all ^= arr[i];
    }
    int msb = -1;
    int i = xor_all;
    while(i){
        msb++;
        i = i >> 1;
    }
    int first_number = 0;
    for(int i=0;i<n;i++){
        int n = arr[i];
        int pos = msb;
        int check = getbit(n,pos);
        if(check){
            first_number ^= arr[i];
        }
    }
    int second_number = first_number^xor_all;
    cout << first_number << " " << second_number << endl;
    return 0;
}