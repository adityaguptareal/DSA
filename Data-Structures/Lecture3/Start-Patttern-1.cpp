#include <iostream>
using namespace std;

int main(){
    // Pattern Prining Problem

    // Pattern 1 Question
    //  ****
    //  ****
    //  ****
    //  ****

    // Solution
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

}