// Binary Search ek searching algorithm hai jo sorted array/list me kisi element ko efficiently dhoondhne ke liye use hota hai.

//Binary Search ek aisa searching algorithm hai jo sirf sorted array ke liye kaam karta hai. Isme hum poore array ko ek-ek karke check nahi karte, balki har step pe array ka middle element check karte hain. Agar middle element hi humara desired element (key) hai, toh turant return kar dete hain. Agar key middle se chhota hai, toh hum sirf left half me search karte hain. Aur agar key bada hai, toh right half me search karte hain. Is tarah se har step pe array ka size aadha hota jata hai, isiliye Binary Search bahut fast hota hai, jiska time complexity O(log n) hota hai. Ye searching linear search se kaafi fast hoti hai, lekin condition sirf ek hai — array pehle se sorted hona chahiye. Binary search ko aap iterative ya recursive dono tarike se implement kar sakte ho.


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
