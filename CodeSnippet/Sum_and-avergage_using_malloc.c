#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (float *)malloc(n * sizeof(float));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;  // ✅ You missed a semicolon here
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &ptr[i]);
        sum += ptr[i];
    }

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", sum / n);

    free(ptr);  // ✅ Always free allocated memory
    return 0;
}
