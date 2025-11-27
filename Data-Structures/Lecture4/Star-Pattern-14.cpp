#include <iostream>
using namespace std;

int main()
{
    // Pattern 14
    // A 
    // B B
    // C C C


// Code Revision 
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int column = 1;
        while (column <= row)
        {
            char output = ('A' + row - 1);
            cout << output << " ";
            column++;
        }
        cout << endl;
        row++;
    }
}