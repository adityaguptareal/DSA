#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int digits = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        digits = (digits * 10) + lastDigit;
    }

    return digits;
}

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int reverseDigits = reverseNumber(n);
    cout << reverseDigits;
    return 0;
}