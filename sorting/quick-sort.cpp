#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivotElement=arr[end];
    int pos=start;
    for (int i = start; i <= end; i++)
    {
        if(arr[i]<=pivotElement){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
    
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int partitionIndex = partition(arr, start, end);
    quickSort(arr, start, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, end);
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

    quickSort(arr, 0, size - 1);

    printArray(arr, size);

    return 0;
}