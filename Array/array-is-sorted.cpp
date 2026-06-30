#include <iostream>
using namespace std;

bool checkSorted(int arr[], int end)
{

    bool asc = true;
    bool desc = true;

    for (int i = 0; i < end; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            asc = false;
        }
        if (arr[i] < arr[i + 1])
        {
            desc = false;
        }
    }

    return asc || desc;
}

int main()
{
    int arr[7] = {8,7,6,5,4,3,0,};
    int end = sizeof(arr) / sizeof(arr[0]);
    int sorted = checkSorted(arr, end - 1);
    if (sorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";
    return 0;
}