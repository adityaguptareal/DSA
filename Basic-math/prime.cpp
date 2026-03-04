#include <iostream>
using namespace std;

bool isPrime(int x)
{

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int numbers = isPrime(23);
    cout << numbers;
    return 0;
}