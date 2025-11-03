//Binary Search
// Revision 1
//Time Complexity
//Best Case O(1)
//Worst Case O(log2n)

//Code : 
# include <stdio.h>
int main(){
    int lower=0,end=4,mid=0,flag=-1;
    int arr[5]={2,3,4,5,6};
    int key;
    printf("Enter the Key: ");
    scanf("%d",&key);
    while(lower<=end){
mid=(lower+end)/2;
        if(key==arr[mid]){
            flag=mid;
            break;
        }
        else if(mid>key){
            end=mid-1;
        }
        else{
            lower=mid+1;
        }
    }
    if(flag==-1){
        printf("Element Not found");
    }
    else{
        printf("Element found at %d", flag);
    }
  
    return 0;
}
