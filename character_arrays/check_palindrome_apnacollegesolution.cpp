#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr1[n];
    cin >> arr1;
    bool check = 1;
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr1[n-i-1]){
            check = 0;
            break;
        }
    }
    if(check==1)
        cout << "Word is a palindrome.";
    else 
        cout << "Word is not a palindrome.";
    return 0;
}