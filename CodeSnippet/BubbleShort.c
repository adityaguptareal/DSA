
// Bubble Sort ek simple sa sorting algorithm hai jo ek array ke andar ke elements ko chhote se bade ya bade se chhote order mein arrange karta hai.


// Working of Bubble Short

// Array ke har element ko uske baaju wale (next) element ke saath compare karo.

// Agar pehla element bada hai, toh swap karo.

// Aisa karte karte har round mein sabse bada element last mein chala jaata hai.

// Fir next round mein usko skip karke phir se comparison karo.

// Ye process tab tak chalta hai jab tak pura array sort na ho jaaye.

#include <stdio.h>
void main()
{
    int arr[100], n;
    printf("Enter the number of ELements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Shorted Arrary \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}