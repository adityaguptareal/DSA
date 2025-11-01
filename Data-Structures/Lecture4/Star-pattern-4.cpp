#include <iostream>
using namespace std;

int main()
{
    // Pattern 4
    // 1 2 3
    // 4 5 6
    // 7 8 9


    // Solution
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int row = 1;
    int counter = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            cout << counter << " ";
            counter++;
            column++;
        }
        cout << endl;
        row++;
    }
}