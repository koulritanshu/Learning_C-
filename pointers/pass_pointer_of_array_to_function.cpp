#include <iostream>
using namespace std;
int display_array(int *ptr){
    for(int i=0;i<7;i++){
        cout << *(ptr+i); 
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    display_array(arr);
}