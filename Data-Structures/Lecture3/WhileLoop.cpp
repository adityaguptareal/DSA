#include <iostream>
using namespace std;



// While Loop
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int i = 0;
    while (i <= 10)
    {
        cout << number << "X" << i << "=" << number * i << endl;
        i++;
    }
}
