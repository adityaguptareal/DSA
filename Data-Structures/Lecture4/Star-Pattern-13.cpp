#include <iostream>
using namespace std;

int main()

{

    // Pattern 13

    // A B C D
    // B C D E
    // C D E F
    // D E F G

    // Approach 1

    // int n;
    // cout << "Enter the output: ";
    // cin >> n;

    // int row = 1;
    // char main = 'A';
    // while (row <= n)
    // {
    //     int column = 1;
    //     while (column <= n)
    //     {
    //         char output = main + column - 1;
    //         cout << output << " ";
    //         column++;
    //     }
    //     cout << endl;
    //     row++;
    //     main++;
    // }


    
    // Approach 2

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            char output = row + column - 2 + 'A';
            cout << output << " ";
            column++;
        }
        cout << endl;
        row++;
    }
}