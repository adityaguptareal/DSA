




#include <stdio.h>
void main(){
    int n,arr[200],start,end,mid,key;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element: \n");
    scanf("%d",&key);
    
    start=0,end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            printf("Key is found at %d",mid+1);
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
        
    }
}
