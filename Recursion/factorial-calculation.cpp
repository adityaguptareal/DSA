#include <iostream>
using namespace std;

int factorialOf(int x)
{
    if (x < 1)
    {
        return 1;
    }
    return x * factorialOf(x - 1);
}
int main()
{
    int number = factorialOf(5);
    cout << "Factorial is " << number;

    return 0;
}