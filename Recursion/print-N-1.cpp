#include <iostream>
using namespace std;

void printCounting(int y)
{
    if(y==0){
        return;
    }
    cout << y <<"\n";
    printCounting(y-1);
}
int main()
{
    printCounting(7);
    return 0;
}