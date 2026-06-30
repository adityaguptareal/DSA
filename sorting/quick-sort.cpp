#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int low=start-1;
    int pivotElement=arr[end];
    for (int i = start; i < end; i++)
    {
        if(arr[i]<=pivotElement){
            low++;
            swap(arr[i],arr[low]);
        }
    }
    swap(arr[low+1],arr[end]);
    return low+1;
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

int main()
{
    int arr[5] = {1, 9, 2, 5, 2};
    int end = (sizeof(arr) / sizeof(arr[0])) - 1;
    quickSort(arr, 0, end);
    for (int i = 0; i <= end; i++)
    {
        cout << arr[i];
    }

    return 0;
}