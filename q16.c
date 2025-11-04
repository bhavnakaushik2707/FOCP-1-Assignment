/*Q16. Implement a C program to insert an element at the front, middle, or end of an array, and print 
the array before and after insertion. */
#include<stdio.h>
int main(){
    int a,choice,size;
    printf("enter max size of array ");
    scanf("%d",&size);
    printf("enter no of elements in array ");
    scanf("%d",&a);
    int arr[size];
    for (int i =0;i<a;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i =0;i<a;i++){
        printf("\n%d",arr[i]);
    }
    int n;
    printf("\n\nwhere do you want to insert element?\n");
    printf("1.Front\n2.Middle\n3.End\n");
    printf("enter your choice: ");
    scanf("%d", &choice);
    printf("Enter the elements to insert:");
    scanf("%d", &n);
    if (choice==1){
        for (int i=a;i>0;i--){
            arr[i]=arr[i-1];            
        }
        arr[0]=n;
        a++;
    }
    else if (choice==2){
        int m=a/2;
        for (int i=a;i>m;i--){
            arr[i]=arr[i-1];            
        }
        arr[m]=n;
        a++;
    }
    else if (choice==3){
        arr[a]=n;
        a++;  
    }
    for (int i =0;i<a;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}
