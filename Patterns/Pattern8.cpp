#include <iostream>
using namespace std;

// Approach 1
void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {

        // For Outer Spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // For stars
        for (int k = 1; k <=2*(n-i)+1 ; k++)
        {
            cout << "*";
        }

        // For Spaces
        for (int l = 1; l <= i - 1; l++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{

    printPattern(5);
    return 0;
}