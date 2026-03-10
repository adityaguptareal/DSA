#include <iostream>
using namespace std;

// Fucntional
int sumOfNFunctional(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumOfNFunctional(n - 1);
    }
}

// Parameterised
void sumOfN(int n, int x)
{
    if (n < 1)
    {
        cout << x << "\n" ;
        return;
    }
    sumOfN(n - 1, x + n);
}
int main()
{
    int n = 3;
    sumOfN(n, 0);
    int answer = sumOfNFunctional(4);
    cout << answer;
    return 0;
}