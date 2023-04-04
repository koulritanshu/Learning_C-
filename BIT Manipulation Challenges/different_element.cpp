#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n; int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int xor_el = 0;
    for(int i=0;i<n;i++){
        xor_el ^= arr[i];
    }
    cout << xor_el;
    return 0;
}