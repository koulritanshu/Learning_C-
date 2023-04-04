#include <iostream>
using namespace std;

int prime(int n){
    if(n<2){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        for(int i=2;i<=n/2+1;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int n1,n2;
    cout << "Enter the value of n1: ";
    cin >> n1;
    cout << "Enter the value of n2: ";
    cin >> n2;
    cout << "Prime Numbers between 1 and "<<n1<<" and "<<n2<<" are: " << endl; 
    for(int i=n1+1;i<n2;i++){
        if(prime(i)){
            cout << i << endl;
        }
    }
    return 0;
}