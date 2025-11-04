/*Q10. Implement a program to find who and how many students scored “99” in the marks array, 
emphasising data scanning and frequency counting.*/

#include<stdio.h>

int main(){
    int a,n=0;
    printf("Enter no of elements in array ");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
        if (arr[i]==99){
            n++;
        }
    } 
    printf("No of students who scored 99 is: %d",n);
    return 0;
}