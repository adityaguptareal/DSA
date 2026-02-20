#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void explainPair()
{

    pair<int, pair<int, int>> l = {5, {6, 7}};
    pair<int, int> p = {3, 4};
    cout << p.second;
    cout << l.second.second;
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    v.push_back({1, 2});
    v.emplace_back(1, 2);
}

void print()
{
    cout << "Aditya";
}

int main()
{
    print();
    explainPair();
    return 0;
}