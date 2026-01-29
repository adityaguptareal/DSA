#include <iostream>
using namespace std;

// *****
// ****
// ***
// **
// *


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

int main()
{

    printPattern5(5);
    return 0;
}