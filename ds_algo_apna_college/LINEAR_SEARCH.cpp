#include <bits/stdc++.h>
using namespace std;

int index(int arr[],int key,int n){
    int txt = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return txt;
}   

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key: ";
    cin >> key;
    cout << "Index -> " << index(arr,key,n);
    return 0;
}