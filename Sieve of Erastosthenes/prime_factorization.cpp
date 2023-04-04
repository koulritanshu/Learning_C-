#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int spf[n+1];
    for(int i=2;i<=n;i++)   spf[i] = i;

    for(int i=2;i<=sqrt(n);i++){
        if(spf[i]==i){
            for(int j=(i*i);j<=n;j+=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }
    while(n!=1){
        cout << spf[n] << " ";
        n = n / spf[n];
    }
    return 0;
}