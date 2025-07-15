
// In Case of Call By value. The copy of value is passed into the function formal parameter and changes inside the function with the variable won't effect the originla variable.
# include <stdio.h>
void swapNumber(int a ,int b);
void main(){
    int x,y;
    printf("Enter the number x: ");
    scanf("%d",&x);
    printf("Enter the number y: ");
    scanf("%d",&y);
    printf("Before Swapping x is %d and y is %d \n",x,y);
    swapNumber(x,y);
    printf("After Swapping x is %d and y is %d \n",x,y);
}
void swapNumber(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}
