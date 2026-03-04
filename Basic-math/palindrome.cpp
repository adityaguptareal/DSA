#include <iostream>
using namespace std;
int isPalindrome(int x)
{
    int numCopy = x;
    int reverseNumber = 0;
    while (x != 0)
    {
        int lastDigit = x % 10;
        x = x / 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    if (reverseNumber == numCopy)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int palindrome = isPalindrome(number);
    cout << palindrome;

    return 0;
}