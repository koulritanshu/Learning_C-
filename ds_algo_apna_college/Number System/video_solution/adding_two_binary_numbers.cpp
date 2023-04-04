#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int rnum = 0, mod;
    while (n)
    {
        mod = n % 10;
        rnum = rnum * 10 + mod;
        n /= 10;
    }
    return rnum;
}

void addBinary(int n1, int n2)
{
    int sum = 0, prevCarry = 0;
    while (n1 > 0 && n2 > 0)
    {
        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            sum = sum * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((n1 % 2 == 1 && n2 % 2 == 0) || (n1 % 2 == 0 && n2 % 2 == 1))
        {
            if (prevCarry)
            {
                sum = sum * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                sum = sum * 10 + 1;
                prevCarry = 0;
            }
        }
        else if (n1 % 2 == 1 && n2 % 2 == 1)
        {
            sum = sum * 10 + 0;
            prevCarry = 1;
        }
        n1 /= 10;
        n2 /= 10;
    }
    while (n1)
    {
        if (n1 % 2 == 1)
        {
            if (prevCarry)
            {
                sum = sum * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                sum = sum * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            if (prevCarry)
            {
                sum = sum * 10 + 1;
                prevCarry = 0;
            }
            else
            {
                sum = sum * 10 + 0;
                prevCarry = 0;
            }
        }
        n1 /= 10;
    }

    while (n2)
    {
        if (n2 % 2 == 1)
        {
            if (prevCarry)
            {
                sum = sum * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                sum = sum * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            if (prevCarry)
            {
                sum = sum * 10 + 1;
                prevCarry = 0;
            }
            else
            {
                sum = sum * 10 + 0;
                prevCarry = 0;
            }
        }
        n2 /= 10;
    }
    if (prevCarry == 1)
    {
        sum = sum * 10 + 1;
        prevCarry = 0;
    }
    cout << "Result -> " << reverse(sum);
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    addBinary(n1, n2);
    return 0;
}