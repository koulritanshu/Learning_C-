#include <iostream>
#include <cmath>
using namespace std;

void prime_using_sieve(int n){
    int arr[n+1];
    for(int i=0;i<=n;i++)    arr[i]=0;
    for(int i=2;i<=sqrt(n);i++){
        if(arr[i]==0){
            for(int j = (i*i);j<=n;j+=i){
                arr[j] = 1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==0)   cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    prime_using_sieve(n);
    return 0;
}