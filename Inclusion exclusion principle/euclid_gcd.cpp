#include <iostream>
#include <climits>
using namespace std;

int gcd(int n1,int n2){
    int lo_nu = min(n1,n2);
    int gr_nu = max(n1,n2);
    while((gr_nu%lo_nu)!=0){
        int temp = gr_nu%lo_nu;
        gr_nu = lo_nu;
        lo_nu = temp;
    }
    return lo_nu;
}

int main()
{
    int n1,n2; cin >> n1 >> n2;
    cout << gcd(n1,n2) << endl;
    return 0;
}