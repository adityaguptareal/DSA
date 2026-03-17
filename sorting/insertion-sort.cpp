#include <iostream>
using namespace std;

// Time Complexity = O(n²)

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {

        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }

    }
}

void printArray(int arr[], int size)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {4, 5, 2, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    printArray(arr, size);

    return 0;
}