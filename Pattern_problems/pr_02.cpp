/*       *
       * *
     * * *
   * * * * ..... upto n
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int a =0;a<n;a++){
        for (int i = 0; i <= 2 * (n - 1 - a); i++)
        {
            cout << " ";
        }
        for(int k = 0; k<=a;k++){
            cout << "* ";
        }    
        cout << endl;
    }
    return 0;
}