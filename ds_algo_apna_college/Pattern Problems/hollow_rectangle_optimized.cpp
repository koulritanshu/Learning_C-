#include <iostream>
using namespace std;
int main()
{
    int row,columns;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> columns; 
    for(int i=0;i<row;i++){
        for(int j=0;j<columns;j++){
            if(i == 0 || i == row-1 || j == 0 || j == columns - 1){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
