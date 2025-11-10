#include <iostream>
using namespace std;

int main()
{
    // Pattern 15
    //  A
    // B C
    // D E F
    // G H I J

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row = 1;
    char output = 'A';
    while (row <= n)
    {

        int column = 1;
        while (column <= row)
        {
            cout << output << " ";
            column++;
            output = output + 1;
        }
        cout << endl;
        row++;
    }
}