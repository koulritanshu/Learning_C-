#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abaacbbd";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    int maximum = INT_MIN;
    int index = 0;
    for(int i=0;i<26;i++){
        if(freq[i]>maximum){
            maximum = freq[i];
            index = i;
        }
    }
    char output = 'a' + index;
    cout << maximum << " " << output << endl;
    return 0;
}