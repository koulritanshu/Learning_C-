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
    int ans = 0;
    if(arr[0]>arr[1])
        ans++;
    int mx = arr[0];
    for(int i=1;i<=n-1;i++){
        if(i==n-1){
            if(arr[i]>mx){
                ans++;
                break;
            }
        }
        if(arr[i]>arr[i+1]&&arr[i]>mx){
            ans++;
            mx = max(arr[i],mx);
        }
    }
    cout << ans << endl;
    return 0;
}