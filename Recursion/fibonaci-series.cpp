#include <iostream>
using namespace std;

// void fibonaciSeries(int n)
// {
//     int first = 0;
//     int second = 1;
//     cout << first << "\n";
//     cout << second << "\n";
//     for (int i = 2; i < n; i++)
//     {
//         int nextState = first + second;
//         cout << nextState << "\n";
//         first = second;
//         second = nextState;
//     }
// }

int nthFibonaciNUmber(int n)
{
    int firstNumber = 0;
    int secondNumber = 1;
    int result = 0;
    if (n == 0)
        return firstNumber;
    if (n == 1)
        return secondNumber;
    for (int i = 2; i <= n; i++)
    {
        result = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = result;
    }
    return result;
}
int nthFibonaciNumberWithRecurssion(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return nthFibonaciNumberWithRecurssion(n - 1) + nthFibonaciNumberWithRecurssion(n - 2);
}
int main()
{
    int number;
    // cout << "Enter the number: ";
    // cin >> number;
    int answer = nthFibonaciNUmber(4);
    cout << answer <<"\n";
    int answer2 = nthFibonaciNumberWithRecurssion(4);
    cout << answer2;
    return 0;
}