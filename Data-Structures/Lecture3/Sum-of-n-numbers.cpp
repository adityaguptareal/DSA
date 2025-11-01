#include <iostream>
using namespace std;

int main()
{
    //  Question:  Sum of N Numbers

    int number;
    cout << "Enter the Number :";
    cin >> number;
    int sum = 0;
    int i = 1;
    while (i <= number)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << "Sum is " << sum << endl;
}