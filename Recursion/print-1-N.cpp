#include <iostream>
using namespace std;

void printCounting(int y)
{
    if(y==0){
        return;
    }
    printCounting(y-1);
    cout << y <<"\n";
}
int main()
{
    printCounting(7);
    return 0;
}