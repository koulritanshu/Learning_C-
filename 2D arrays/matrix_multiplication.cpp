#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout << "Enter the value of n1 and n2: ";
    cin >> n1 >> n2;
    int matrix1[n1][n2];
    cout << "Enter matrix 1: " << endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin >> matrix1[i][j];
        }
    }
    int n3,n4;
    cout << "Enter the value of n3 and n4: ";
    cin >> n3 >> n4;
    int matrix2[n3][n4];
    cout << "Enter matrix 2: " << endl;
    for(int i=0;i<n3;i++){
        for(int j=0;j<n4;j++){
            cin >> matrix2[i][j];
        }
    }
    if(n2!=n3){
        cout << "Matrices can't be multiplied.";
        return 0;
    }
    int matrix[n1][n4];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n4;j++){
            matrix[i][j] = 0;    
        }
    }
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n4;j++){
            for(int k=0;k<n2;k++){
                matrix[i][j] += matrix1[i][k]*matrix2[k][j]; 
            }
        }
    }
    cout << "Final matrix is: " <<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n4;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}