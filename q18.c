/*Q18. Develop a program to identify and print duplicate elements in an array, or print “-1” if no 
duplicates exist, applying frequency detection and data validation. */

#include<stdio.h>

int main(){
    int a,c,fi=0;
    printf("Enter no of elements in array: ");
    scanf("%d",&a);
    int arr[a];
    int f[a];
    for (int i=0;i<a;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
        f[i]=0;
    }
    printf("\nDuplicate elements in the array: ");
    for (int i=0;i<a;i++){
        if (f[i]==1){
            continue;
        }
        c=1;
        for (int j=i+1;j<a;j++){
            if (arr[i]==arr[j]){
                f[j]=1;
                c++;

            }

        }
        if (c>1){
            printf("\n%d",arr[i]);
            fi=1;
        }
    }
    if (!fi){
        printf("No duplicate elements(-1) ");
    }
    return 0;
}