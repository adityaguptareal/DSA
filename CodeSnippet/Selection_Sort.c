// Selection Sort
// Selection Sort is a sorting technique where we compare the current element with all the elements to its right, and if we find a smaller element, we swap it immediately. This process is repeated for every element until the array is sorted.

// Time Complexity:
// Best Case -O(n2)
 //worst Case- O(n2)

Code :

# include <stdio.h>
int main(){
    int size=0;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the %d element: ",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<size-1;i++){
        for (int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
    
    printf("Sorted arry is \n ");
    for (int i=0;i<size;i++){
    printf("%d",arr[i]);
        
    }
    return 0;
    }
}

