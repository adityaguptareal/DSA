#include <iostream>
using namespace std;

// Time Complexity = O(n²)

// void selectionSort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int index = i;

//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] < arr[index])
//             {
//                 index = j;
//             }
//         }

//         swap(arr[i], arr[index]);
//     }
// }

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minimum = arr[0];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] <= minimum)
            {
                minimum = j;
            }
        }
        swap(arr[i], arr[minimum]);
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

    selectionSort(arr, size);

    printArray(arr, size);

    return 0;
}