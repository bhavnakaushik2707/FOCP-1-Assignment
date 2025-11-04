/*Q12. Develop a C program to find the maximum and minimum scores in an array, applying 
comparative logic for ranking and analysis*/

#include<stdio.h>

int main(){
    int a,max,min;
    printf("enter no of elements in array: ");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for (int i=0;i<a;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        else if (arr[i]<min){
            min=arr[i];
        }

    } 
    printf("Max element in array is %d\n",max);
    printf("Min element in array is %d\n",min);
    return 0;
}