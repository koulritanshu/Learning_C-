#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==0){
        cout << "Not power of 4.";
        return 0;
    }
    int setbits = __builtin_popcount(n);
    if(setbits!=1){
        cout << "Number is not power of 4.";
    }
    else{
        int i=1,count=0;
        while(i<=n){
            if((i&n)==0)
                count++;
            i=i<<1;
        }
        if(count%2==0)
            cout << "Number is power of 4.";
        else
            cout << "Number is not power of 4.";
    }
    return 0;
}