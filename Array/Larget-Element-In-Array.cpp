#include <iostream>
using namespace std;



int findLargest(int arr[], int end)
{
    int largest = arr[0];
    for (int i = 1; i <= end; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[5] = {2, 3, 5, 1, 4};
    int end = (sizeof(arr) / sizeof(arr[0])) - 1;
    int largestNumber = findLargest(arr, end);
    cout << largestNumber;
    return 0;
}