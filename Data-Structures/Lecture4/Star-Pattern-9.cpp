#include <iostream>
using namespace std;
int main(){

    // Pattern 9
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1


    int n;
    cout << "Enter the number: " << endl;
    cin>>n;

    int row=1;
    
    while (row<=n)
    {
        int column=1;
        while (column<=row)
        {
            cout << (row-column+1);
            column++;
        }
        cout << endl;
        row++;        
        
    }
    




}