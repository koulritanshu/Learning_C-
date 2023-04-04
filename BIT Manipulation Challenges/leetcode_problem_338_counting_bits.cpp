#include <iostream>
using namespace std;

int count_set_bits(int n){
    return __builtin_popcount(n);
}

int main()
{
    int n; cin >> n; int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = count_set_bits(i);
    }
    for(int i=0;i<=n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

