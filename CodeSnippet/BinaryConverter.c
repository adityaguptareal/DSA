#include<stdio.h>
#include<math.h>
int main(){
    int n,c=0,b;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    int a[100],i=0;
    while(n!=0){
        a[i++]=n%2;
        n/=2;
        c++;
    }
    for(i=0;i<c;i++) printf("%d",a[c-i-1]);
    return 0;
}