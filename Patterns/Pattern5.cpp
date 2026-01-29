#include <iostream>
using namespace std;

// *****
// ****
// ***
// **
// *

// Approach 1
void printPattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// Approach 2

void printPattern5Approach2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{

    printPattern5Approach2(5);
    return 0;
}