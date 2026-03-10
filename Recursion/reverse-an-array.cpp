#include <iostream>
#include <algorithm>
using namespace std;

// ---------------- PRINT ARRAY ----------------
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// with two pointer
void reverseTwoPointer(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

// With Recurrsion
void reverseRecursion(int arr[], int left, int right)
{
    if (left >= right)
        return;

    swap(arr[left], arr[right]);
    reverseRecursion(arr, left + 1, right - 1);
}

// Using Extra Array
void reverseWithExtraArray(int arr[], int reversed[], int size)
{
    for (int i = 0; i < size; i++)
    {
        reversed[i] = arr[size - 1 - i];
    }
}

// Using STL
void reverseUsingSTL(int arr[], int size)
{
    reverse(arr, arr + size);
}

int main()
{
    int arr[] = {1, 3, 5, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array:\n";
    printArray(arr, size);

    // ---- Choose any method ----

    // Method 1
    // reverseTwoPointer(arr, size);

    // Method 2
    // reverseRecursion(arr, 0, size - 1);

    // Method 3
    // int reversed[size];
    // reverseWithExtraArray(arr, reversed, size);
    // printArray(reversed, size);
    // return 0;

    // Method 4
    reverseUsingSTL(arr, size);

    cout << "\nReversed Array:\n";
    printArray(arr, size);

    return 0;
}