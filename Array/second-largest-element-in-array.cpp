#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Optimal Approch

void getElementsWithOptimalApproach(int arr[], int end)
{
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for (int i = 0; i <= end; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }
    cout << "Smallest is " << smallest << endl;
    cout << "Second Smallest is " << secondSmallest << endl;
}

// bruteForce
void getElements(int arr[], int end)
{
    sort(arr, arr + end);
    int largest = arr[end];
    int secondLargest = arr[end - 1];
    int smallest = arr[0];
    int SecondSmallest = arr[1];
    for (int i = 0; i <= end; i++)
    {
        cout << arr[i] << "," << " ";
    }
    cout << endl;
    cout << largest << "\n";
    cout << secondLargest << "\n";
    cout << smallest << "\n";
    cout << SecondSmallest << "\n";
}

// Better Approach

void getElementsWithBetterApproach(int arr[], int end)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int secondSmallest = INT_MAX;
    int secondLargest = INT_MIN;
    for (int i = 0; i <= end; i++)
    {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }
    for (int i = 0; i <= end; i++)
    {
        if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
        if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << secondSmallest << endl;
    cout << secondLargest << endl;
}

int main()
{
    int arr[7] = {2, 3, 1, 42, 1, 42, 43};
    int end = (sizeof(arr) / sizeof(arr[0])) - 1;
    // getElements(arr, end);
    // getElementsWithBetterApproach(arr, end);
    getElementsWithOptimalApproach(arr, end);

        return 0;
}