/*Q11. Develop a C program to traverse an array of scores, determine whether each score is even or 
odd using conditional logic, and store them into two separate arrays — even_array and odd_array. */
#include<stdio.h>

int main(){
    int a;
    printf("Enter no of elements in the array: ");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("Enter the element %d ",i+1);
        scanf("%d",&arr[i]);
    }
    int e_array[a],o_array[a];
    int e=0,o=0;
    for (int i = 0; i < a; i++) {
        if (arr[i] % 2 == 0) {
            e_array[e] = arr[i];
            e++;
        } else {
            o_array[o] = arr[i];
            o++;
        }
    }
    printf("\n\n");
    for (int i=0;i<e;i++){
        printf("Even array element %d: %d\n",i+1,e_array[i]);
    }
    printf("\n\n");
    for (int i=0;i<o;i++){
        printf("Odd array element %d: %d\n",i+1,o_array[i]);
    }
    return 0;
}