// strcmp returns 0 if both are equal 
// and -1 if they are not equal.
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char arr1[100];
    cin >> arr1;
    char arr2[100];
    int i=0;
    while(arr1[i]!='\0'){
        i++;
    }
    for(int j=0;j<i;j++){
        arr2[j] = arr1[i-1-j];
    }
    arr2[i] = '\0';
    cout << arr1 << endl << arr2 << endl;;
    if(strcmp(arr1,arr2)==0)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
    return 0;
}