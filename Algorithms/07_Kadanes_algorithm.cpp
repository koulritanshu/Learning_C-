// Kadane's algorithm is used to find the maximum sum of a subarray.
// It's complexity is O(n).

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int currSum = 0,max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum<0)
            currSum = 0;
        max_sum = max(max_sum,currSum);
    }
    cout << max_sum << endl;
    return 0;
}