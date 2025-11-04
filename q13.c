/*Q13. Design a C program to find a peak element that is not smaller than its neighbours.  */


#include<stdio.h>

int main(){
    int a,peak=1,c=0;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<a;i++){
        if (i==0 && arr[i]>=arr[i+1]){
            peak=arr[i];
            c++;
            printf("peak element in the array: %d\n",peak);
        }
        else if (i==a-1 && arr[i]>=arr[i-1]){
            peak=arr[i];
            c++;
            printf("peak element in the array: %d\n",peak);
        }
        else if (arr[i]>=arr[i+1] && arr[i]>=arr[i-1]){
            peak=arr[i];
            c++;
            printf("peak element in the array: %d\n",peak);
        }
        

    } 
    printf("\n\n\n No of peak elements are : %d\n\n",c);
    return 0;}