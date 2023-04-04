#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool arr[n+1] = {0};
    for(int i=2;i<=sqrt(n);i++){
        if(arr[i]==false){
            for(int j=(i*i);j<=n;j+=i){
                arr[j]=true;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==false)   cout << i << " ";
    }
    return 0; 
}