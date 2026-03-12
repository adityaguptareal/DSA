#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string filteredData;
bool isPalindromeWithRecurssion(string &word, int i = 0)
{
    if (i == 0)
    {

        for (int j = 0; j < word.size(); j++)
        {
            if (isalnum(word[j]))
            {
                filteredData += tolower(word[j]);
            }
        }
    }
    if (i >= filteredData.size() / 2)
    {
        return true;
    }
    if (filteredData[i] != filteredData[filteredData.size() - i - 1])
    {
        return false;
    }
    return isPalindromeWithRecurssion(filteredData, i + 1);
}

int main()
{

    string word = "race a car";
    cout << isPalindromeWithRecurssion(word);
    return 0;
}