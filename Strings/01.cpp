#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string without spaces: " << endl;
    cin >> s;
    cout << s;
    string s2(5,'n');
    string s3 = "Ronit";
    cout << endl << s2 << endl << s3 << endl;
    string s4; // inputting string with space in between
    cout << "Enter a string with spaces: " << endl;
    cin.ignore();
    getline(cin, s4);
    cout << s4 << endl;
    return 0;
}