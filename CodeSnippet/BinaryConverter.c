#include <stdio.h>

int main()
{
    int n, i = 0;
    int arr[32];
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary representation: ");
    if (n == 0)
    {
        printf("0");
    }
    else
    {
        while (n!=0)
        {
            arr[i] = n % 2;
            n = n / 2;
            i++;
        }
    }
    for (int j = 0; j <n-1 ; j++)
    {
        printf("%d", arr[j]);
    }
}
