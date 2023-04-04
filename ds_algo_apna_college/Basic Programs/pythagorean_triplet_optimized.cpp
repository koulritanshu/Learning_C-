#include <iostream>
using namespace std;

bool triplet(int n1,int n2,int n3){
    int greatest = max(n1,max(n2,n3));
    int lhs;
    if(greatest==n1)
        lhs = n2*n2+n3*n3;
    else if(greatest==n2)
        lhs = n1*n1+n3*n3;
    else 
        lhs = n1*n1+n2*n2;
    int rhs = greatest*greatest;
    if(lhs==rhs)
        return true;
    else 
        return false;
}

int main()
{
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    if(triplet(n1,n2,n3))
        cout << "Pythagorean Triplet.";
    else
        cout << "Not a Pythagorean Triplet.";
    return 0;
}