#include <iostream>
using namespace std;

void divisors(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << i << "\n";
        }
    }
}

int main()
{
    divisors(36);
    return 0;
}