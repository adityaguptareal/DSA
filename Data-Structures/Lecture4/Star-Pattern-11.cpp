#include <iostream>
using namespace std;

int main()
{
    // Pattern 10
    // A B C
    // D E F
    // G H I

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int column = 1;
        while (column <= n)
        {
            char output = ('A' + column - 1);
            cout << output << " ";
            column++;
        }
        cout << endl;
        row++;
    }
}