#include <bits/stdc++.h>

using namespace std;
int main()
{
    int number;
    cout << "Enter the length of the array: ";
    cin >> number;
    int arr[number];
    for(int i = 0;i<number;i++){
        cout << "Enter element at index " << i+1 << ": ";
        cin >> arr[i];
    }
    int max=INT_MIN,min=INT_MAX;//if you include iostream then for this you
    // need to include climits -> #include <climits>
    for(int i=0;i<number;i++){
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];            
    }
    cout << "Maximum element -> " << max;
    cout << endl << "Minimum element -> " << min;
    return 0;
}