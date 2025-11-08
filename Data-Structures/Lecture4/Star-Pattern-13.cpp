#include <iostream>
using namespace std;

int main()

{

    // Pattern 13

    // A B C D 
    // B C D E 
    // C D E F 
    // D E F G 

    int n;
    cout << "Enter the output: ";
    cin >> n;

    int row = 1;
    char main = 'A';
    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            char output = main + column - 1;
            cout << output << " ";
            column++;
        }
        cout << endl;
        row++;
        main++;
    }
}