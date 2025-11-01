#include <iostream>
using namespace std;

int main()
{

    //  Pattern 3
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1

    // Solution

    int n;
    cout << "Enter the number";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int ncopy = n;
        while (j <= n)
        {
            cout << ncopy;
            j++;
            ncopy--;
        }
        cout << endl;
        i++;
    }
}