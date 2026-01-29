#include <iostream>
using namespace std;

// 12345
// 1234
// 123
// 12
// 1

// Approach 1
void printPattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=n-i+1;j++)
        {
            cout << j;
        }

        cout << endl;
    }
}



int main()
{

    printPattern6(5);
    return 0;
}