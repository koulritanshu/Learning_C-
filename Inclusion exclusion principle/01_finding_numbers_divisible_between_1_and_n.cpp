#include <iostream>
using namespace std;
int divisble(int n,int a,int b){
    int c1 = n/a; int c2 = n/b; int c3 = n/(a*b);
    return c1+c2-c3;
}
int main()
{
    int n,a,b; cin >> n >> a >> b; cout << divisble(n,a,b); return 0;
}

// My approach
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 20;
//     int arr[n+1];
//     int count=0;
//     for(int i=1;i<=n;i++) arr[i] = 0;
//     for(int j=4;j<=n;j+=4) arr[j] = 1;
//     for(int j=5;j<=n;j+=5) arr[j] = 1;
//     for(int i=1;i<=n;i++){
//         if(arr[i]) count++;
//     }
//     cout << count;
// }