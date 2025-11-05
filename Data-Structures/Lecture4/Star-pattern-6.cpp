#include <iostream>

using namespace std;

int main(){
    // Pattern 6
    // 1
    // 2 2
    // 3 3 3 
    // 4 4 4 4

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row=1;
    while (row<=n)
    {
        int column=1;
        while (column<=row)
        {
            /* code */
            cout << row;
            column ++;
        }
        cout << endl;
        row++;
        
    }
    

}