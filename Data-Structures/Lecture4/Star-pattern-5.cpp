#include <iostream>
using namespace std;

int main()
{
    // Pattern 5
    // *
    // **
    // ***
    // ****
    // *****

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            /* code */
            cout << "*";
            column++;
        }
        cout << endl;
        row++;
    }
}