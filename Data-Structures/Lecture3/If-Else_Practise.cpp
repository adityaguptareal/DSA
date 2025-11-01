#include <iostream>
using namespace std;

int main()
{
    cout << "Hello wolrd" << endl;

    // If Else

    // int a;
    // cout << "Enter The Number :" << endl;
    // cin >> a;
    // if (a % 2 == 0)
    // {
    //     cout << "Number is Even" << endl;
    // }
    // else
    // {
    //     cout << "Number is Odd" << endl;
    // }

    // While Loop

    // int number;
    // cout << "Enter the number: ";
    // cin >> number;
    // int i = 0;
    // while (i <= 10)
    // {
    //     cout << number << "X" << i << "=" << number * i <<endl;
    //     i++;
    // }

    //  Question:  Sum of N Numbers

    // int number;
    // cout << "Enter the Number :";
    // cin >> number;
    // int sum = 0;
    // int i = 1;
    // while (i <= number)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum = sum + i;
    //     }
    //     i++;
    // }
    // cout << "Sum is " << sum << endl;

    // Pattern Prining Problem

    // Pattern 1 Question

    //  ****
    //  ****
    //  ****
    //  ****
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

    return 0;
}