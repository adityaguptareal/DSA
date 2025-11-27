#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value " << endl;
    cin >> n;
    cout << "Printing count from 1 to : " << n ;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}