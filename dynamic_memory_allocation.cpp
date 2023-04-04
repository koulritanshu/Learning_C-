#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p = new int(); // allocating memory in heap
    // p here is a pointer which is stored in stack and stores the address of the variable stored
    // in heap.
    *p = 10; 
    cout << *p << endl;
    delete(p); // deallocating memory from heap
    int *a = new int[4];
    for(int i=0;i<4;i++){
        *(a+i) = 10;
    }
    for(int i=0;i<4;i++){
        cout << *a << endl;
        a++;
    }
    delete[]a;
    return 0;
}