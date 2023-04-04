#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m; 
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                cout << "Element found at row " << i+1 << " and column " << j+1 << endl;
                return 0;
            }
        }
    }
    cout << "-1";
    return 0;
}