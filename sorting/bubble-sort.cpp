#include <iostream>
using namespace std;

// Time Complexity
// Worst or AvgCase O(n²)
// Best case O(n)

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i >= size - 1; i++)
    {
        // For optmisation
        int swapped = 0;
        for (int j = 0; j <= size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 1)
        {
            break;
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

    bubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}