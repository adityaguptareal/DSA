#include <iostream>
using namespace std;

void printName2(int x, int y)
{
    if (x > y)
    {
        return;
    }
    cout << "Aditya\n";
    printName2(x + 1, y);
}

void printName(int x)
{
    if (x == 0)
    {
        return;
    }
    cout << "Aditya \n";
    printName(x - 1);
}

int main()
{

    // printName(5);
    printName2(7,10);
    return 0;
}