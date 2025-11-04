/*Q17. Design a C program to delete an element from the front, middle, or end of an array, and print 
the array before and after deletion. */
#include<stdio.h>
int main(){
    int a,choice,s;
    printf("enter max size of array ");
    scanf("%d",&s);
    printf("enter no of elements in array ");
    scanf("%d",&a);
    int arr[s];
    for (int i =0;i<a;i++){
        printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i =0;i<a;i++){
        printf("\n%d",arr[i]);
    }
    printf("\n\nWhere's element do you want to delete?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("enter your choice ");
    scanf("%d", &choice);
    if (choice==1){
        for (int i=0;i<a-1;i++){
            arr[i]=arr[i+1];            
        }
        a--;
    }
    else if (choice==2){
        int m=a/2;
        for (int i=m;i<a-1;i++){
            arr[i]=arr[i+1];            
        }
        a--;
    }
    else if (choice==3){
        a--;  
    }
    for (int i =0;i<a;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}