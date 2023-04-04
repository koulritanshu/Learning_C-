/* *
   * * 
   * * *
   * * * * ..... upto n
*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of n" << endl;
    cin >> a;
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}