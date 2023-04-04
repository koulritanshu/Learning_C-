#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    const int N = 1e5+2;
    int minidx = INT_MAX;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i] = -1;
    }
    for(int j=0;j<n;j++){
        if(idx[arr[j]]==-1)
            idx[arr[j]] = j;
        else
            minidx = min(idx[arr[j]],minidx);
    }
    if(minidx == INT_MAX)
        cout << "-1" << endl;
    else    
        cout << minidx + 1 << endl;
    return 0;
}