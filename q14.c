/*Q14. Develop a C program to count the number of prime numbers in an array. */
#include<stdio.h>

int main(){
    int n,i,x=0,c=0;

    printf("enter no of elements in array ");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        x=0;
       for (int j=2;j<=arr[i]/2;j++){
         if (arr[i]%j==0){
            x=1;
            break;
         }        
        }
     if (x==0 && arr[i]>1){
        c++;
        printf("Prime element in the array %d\n",arr[i]);
    }
    }
    printf("\n\n\n No of prime elements %d\n",c);
    
    return 0;
}