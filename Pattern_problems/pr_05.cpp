/*


    *
   * *
  * * *
 * * * *
* * * * *

......... upto n times
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i = 0;i<n;i++){
        for(int j = n-i-1;j>=0;j--){
            cout << " ";
        }
        for(int k = 0; k <= i;k++){
            cout << "* ";
        }
        for(int j = n-i-1;j>=0;j--){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}