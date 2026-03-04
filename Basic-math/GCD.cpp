#include <iostream>
using namespace std;

int gcdCalculator(int x, int y)
{
    int gcd = 1;
    for (int i = 1; i <= min(x, y); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            if (i > gcd)
            {
                gcd = i;
            }
        }
    }
    return gcd;
}

int main()
{

    int answer = gcdCalculator(11, 22);
    cout << answer;
    return 0;
}