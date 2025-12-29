#include <iostream>
using namespace std;
int main()
{

    // Approach 2
    
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // result=n(n+1)/2
    // printf("%d",&result);

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    cout << "result is " << result;
}
