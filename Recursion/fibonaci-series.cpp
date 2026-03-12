#include <iostream>
using namespace std;

void fibonaciSeries(int n)
{
    int first = 0;
    int second = 1;
    cout << first << "\n";
    cout << second << "\n";
    for (int i = 2; i < n; i++)
    {
        int nextState = first + second;
        cout << nextState << "\n";
        first = second;
        second = nextState;
    }
}
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    fibonaciSeries(number);
    return 0;
}