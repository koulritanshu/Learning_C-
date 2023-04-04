#include <iostream>
using namespace std;

void triplet(int lhs,int temp){
    int rhs = temp*temp;
    if(lhs==rhs)
        cout << "Pythagorean Triplet.";
    else
        cout << "Not a Pythagorean Triplet.";
}

int main()
{
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    int temp,lhs;
    if(n1>n2){
        temp = n1;
        lhs = n2*n2 + n3*n3;
    }
    else{ 
        temp = n2;
        lhs = n1*n1 + n3*n3;
    }
    if(n3>temp){
        temp = n3;
        lhs = n1*n1 + n2*n2;
    }
    triplet(lhs,temp);
    return 0;
}