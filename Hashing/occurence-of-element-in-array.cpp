#include <iostream>
using namespace std;

int frequency(int n, int arr[], int length)
{
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int array[9] = {2, 4, 2, 5, 3, 5, 3, 5, 5};
    int lenght = sizeof(array) / sizeof(array[0]);
    int number = 5;
    int answer = frequency(5, array, lenght);
    cout << answer;
    return 0;
}