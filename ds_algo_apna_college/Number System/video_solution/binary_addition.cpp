#include <bits/stdc++.h>
using namespace std;

void binaryAddition(int n1, int n2)
{
    int carry = 0;
    int arr[50];
    for (int i = 0; i <= 49; i++)
    {
        arr[i] = 0;
    }
    int i = 0;
    while (n1 && n2)
    {
        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            arr[i] = carry;
            i++;
            carry = 0;
        }
        else if ((n1 % 2 == 1 && n2 % 2 == 0) || (n1 % 2 == 0 && n2 % 2 == 1))
        {
            if (carry)
            {
                arr[i] = 0;
                i++;
                carry = 0;
            }
            else
            {
                arr[i] = 1;
                i++;
                carry = 0;
            }
        }
        else if (n1 % 2 == 1 && n2 % 2 == 1)
        {
            arr[i] = 0;
            i++;
            carry = 1;
        }
        n1 /= 10;
        n2 /= 10;
    }
    while (n1)
    {
        if (n1 % 2 == 1)
        {
            if (carry)
            {
                arr[i] = 0;
                i++;
                carry = 1;
            }
            else
            {
                arr[i] = 1;
                i++;
                carry = 0;
            }
        }
        else
        {
            if (carry)
            {
                arr[i] = 1;
                i++;
                carry = 0;
            }
            else
            {
                arr[i] = 0;
                i++;
                carry = 0;
            }
        }
    }
    while (n2)
    {
        if (n2 % 2 == 1)
        {
            if (carry)
            {
                arr[i] = 0;
                i++;
                carry = 1;
            }
            else
            {
                arr[i] = 1;
                i++;
                carry = 0;
            }
        }
        else
        {
            if (carry)
            {
                arr[i] = 1;
                i++;
                carry = 0;
            }
            else
            {
                arr[i] = 0;
                i++;
                carry = 0;
            }
        }
    }
    if (carry)
    {
        arr[i] = 1;
        carry = 0;
    }
    for (int j = i; j >= 0; j--)
    {
        cout << arr[j];
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    binaryAddition(n1, n2);
}