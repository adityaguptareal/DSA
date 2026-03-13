#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " Element of this array: ";
        cin >> arr[i];
    }

    // precomputation
    int hashTable[100] = {0};

    for (int i = 0; i < n; i++)
    {
        hashTable[arr[i]]++;
    }

    int q;
    cout << "No of elements you want to query : ";
    cin >> q;

    int i = 1;

    while (q--)
    {
        int number;
        cout << "Enter your " << i << " Element: ";
        cin >> number;

        cout << "Frequency of elements is\n";
        cout << hashTable[number] << endl;

        i++;
    }

    return 0;
}