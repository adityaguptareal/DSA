#include <iostream>
using namespace std;

int main()
{
    // Pattern 12

    // ABCD
    // EFGH
    // IJKL
    // MNOP

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row = 1;
    char output = 'A';
    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            cout << output;
            column++;
            output++;
        }
        cout << endl;
        row++;
    }
}