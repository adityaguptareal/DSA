#include <stdio.h>

int power(int n, int p)
{
    int result = 1;
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}

int main()
{
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int base = 2, basePower = 0, decimal = 0, digit;
    while (n > 0)
    {
        digit = n % 10;
        decimal += digit * power(base, basePower);
        basePower++;
        n = n / 10;
    }
    printf("Decimal representation: %d", decimal);
}