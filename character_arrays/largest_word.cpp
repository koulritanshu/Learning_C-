#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of characters in the sentence: ";
    cin >> n;
    cin.ignore();
    n++;
    char arr[n];
    cout << "Enter the sentence: " << endl;
    cin.getline(arr,n);
    int st=0,maxst=0,currlen=0,maxlen=0;
    for(int i=0;i<n;i++){
        if(arr[i]==' '||arr[i]=='\0'){
            if(currlen>maxlen){
                maxlen=currlen;
                maxst=st;
            }
            currlen=0;
            st=i+1;
        }
        else currlen++;
    }
    cout << "The number of characters are " << maxlen << " and the word is ";
    for(int i=0;i<maxlen;i++){
        cout << arr[i+maxst];
    }
    return 0;
}