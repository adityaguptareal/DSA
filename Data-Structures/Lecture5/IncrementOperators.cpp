#include <iostream>
using namespace std;

int main()
{
    int number = 7;
    cout << (++number) << endl;
    // 8
    cout << (number++) << endl;
    // 8
    cout << (number--) << endl;
    // 9
    cout << (--number) << endl;
    // 7
}