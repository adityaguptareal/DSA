//  Call by Reference
// Yahan original variable ka address/function ke paas jaata hai.

// Agar function mein variable ko badalte ho, toh asli wala bhi badal jaata hai.
# include <stdio.h>
void swapNumber(int *a ,int *b);
void main(){
    int x,y;
    printf("Enter the number x: ");
    scanf("%d",&x);
    printf("Enter the number y: ");
    scanf("%d",&y);
    printf("Before Swapping x is %d and y is %d \n",x,y);
    swapNumber(&x,&y);
    printf("After Swapping x is %d and y is %d \n",x,y);
}
void swapNumber(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
  
}
