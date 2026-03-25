#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int index = 0, left = start, right = mid + 1;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = arr[right];
            index++;
            right++;
        }
    }
    while (left <= mid)
    {
        temp[index] = arr[left];
        index++;
        left++;
    }
    while (right <= end)
    {
        temp[index] = arr[right];
        index++;
        right++;
    }
    
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[index];
        index++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
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

    mergeSort(arr, 0, size - 1);

    printArray(arr, size);

    return 0;
}