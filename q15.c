/*Q15. Write a C program to cyclically rotate the array clockwise by one position, applying array 
transformation logic used in scheduling and encryption. */
#include<stdio.h>

int main(){
    int a,x;
    printf("Enter no of elements in array: ");
    scanf("%d",&a);
    int arr[a];
    for (int i =0;i<a;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    t=arr[a-1];
    for (int i=a-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    printf("After Array rotation: \n");
    for (int i =0;i<a;i++){
        printf("\n%d",arr[i]);

    }
    return 0;
}