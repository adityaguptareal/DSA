#include <iostream>
using namespace std;

int countingDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int answer = countingDigit(n);
    cout << answer;

    return 0;
}