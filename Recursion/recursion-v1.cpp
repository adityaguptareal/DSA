#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int x){
    if(x==30){
        return;
    }
    cout << x <<"\n";
    print(x-1);

}

int main()
{

    print(45);
    return 0;
}