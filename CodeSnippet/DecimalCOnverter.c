#include <stdio.h>

int main(){
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int total=0, base=1,digit;

    while (n>0)
    {
        digit=n%10;
        total+=digit*base; 
        base=base*2;
        n=n/10;
    }
    printf("Decimal representation: %d", total);
    
}