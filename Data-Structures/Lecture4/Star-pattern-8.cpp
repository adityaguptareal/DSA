#include <iostream>

using namespace std;

int main(){
    // Pattern 8
    // 1
    // 2 3
    // 3 4 5 
    // 4 5 6 7

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row=1;
    while (row<=n)
    {
        int column=1;
        int value=row;
        while (column<=row)
        {
            /* code */
            cout << value;
            column ++;
            value++;
        }    
        cout << endl;
        row++;    
    }
}