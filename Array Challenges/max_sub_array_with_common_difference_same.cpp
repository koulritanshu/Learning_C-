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
    int ans = 2;
    int pd = arr[1] - arr[0];
    int curr = 2;
    int j = 2;
    while(j<=n-1){
        int cd = arr[j] - arr[j-1];
        if(cd == pd){
            curr++;
            ans = max(curr,ans);
            pd = arr[j] - arr[j-1];
        }
        else {
            ans = max(ans,curr);
            pd = arr[j]-arr[j-1];
            curr = 2;
        }
        j++;
    }
    cout << ans;
    return 0;
}