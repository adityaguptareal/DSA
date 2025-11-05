#include <iostream>

using namespace std;

int main(){
    // Pattern 7
    // 1
    // 2 3
    // 4 5 6 
    // 7 8 9 10

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int row=1;
    int counter=1;
    while (row<=n)
    {
        int column=1;
        while (column<=row)
        {
            /* code */
            cout << counter << " ";
            column ++;
            counter++;
        }
        cout << endl;
        row++;
        
    }
    

}