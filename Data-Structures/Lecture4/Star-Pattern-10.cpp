#include <iostream>
using namespace std;

int main()
{
    //revise
    // Pattern 10
    // A A A
    // B B B
    // C C C
    // D D D

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            char output = ('A' + row - 1);
            cout << output << " ";
            column++;
        }
        cout << endl;
        row++;
    }
}
