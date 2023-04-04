#include <iostream>

using namespace std;
int main()
{
    int rows,columns;
    cout << "Enter the number of rows and columns respectively: ";
    cin >> rows >> columns;
    for(int i=0;i<rows;i++){
        if (i==0||i==(rows-1)){
        for(int j=0;j<columns;j++){
            cout << "* ";
        }
        }
        else {
            cout << "* ";
            for(int k = 1;k<columns-1;k++){
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}