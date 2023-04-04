// binary search only works if array is sorted.

#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int start = 0;
    int end = n;
    while(start<=end){
        int middle = (start+end)/2;
        if(arr[middle]==key)
            return middle;
        else if(arr[middle]>key)
            end = middle-1;
        else if(arr[middle]<key)
            start = middle+1;
    }
    return -1;
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
    cout << "Enter key: ";
    cin >> key;
    cout << binarysearch(arr,n,key);
    return 0;
}