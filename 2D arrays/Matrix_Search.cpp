// all rows and columns are sorted  
// we have two possible starting positions.
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int m1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> m1[i][j];
        }
    }
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    int st_n = 0,st_m = m-1;
    while(st_n < n && st_m >= 0){
        if(m1[st_n][st_m]==k){
            cout << "true";
            return 0;
        }
        else if(m1[st_n][st_m]>k)
            st_m--;
        else if(m1[st_n][st_m]<k)
            st_n++;
    } 
    cout << "-1";
    return 0;
}