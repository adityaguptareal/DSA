#include <iostream>
using namespace std;

int main()
{
    // Pattern 16
    // A
    // B C
    // C D E
    // E F G H

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int column = 1;
        while (column <= row)
        {
            char output = row + column - 2 + 'A';
            cout << output << " ";
            column++;
        }
        cout << endl;
        row++;
    }
}