#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isArmStrong(int x)
{
    int originalNumber = x;
    int sum = 0;
    while (x != 0)
    {
        int lastDigit = x % 10;
        sum += pow(lastDigit, 3);
        x /= 10;
    };

    return (originalNumber == sum);
}

int main()
{
    bool number = isArmStrong(153);
    cout << (number ? "ArmStrong Number" : "Not a Arm Strong Number");
    return 0;
}