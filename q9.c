/*Q9. Design a C program to find the first occurrence of the score “99” in an array, focusing on linear 
search and data retrieval techniques.*/
#include<stdio.h>

int main(){
    int a;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
        if (arr[i]==99){
            printf("The first occurance of the score '99' is at the posoition %d",i+1);
            break;
        }
    } 
    return 0;
}