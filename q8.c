/*Q8. Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the 
sum of the two preceding ones. 
0, 1, 1, 2, 3, 5, 8, 13, ... 
*/


#include <stdio.h>

int main() {
    int n, i;
    int num1 = 0, num2=1,num3;

    printf("Enter number of terms you want ");
    scanf("%d",&n); 

    for (i = 1; i <= n; i++) {
        printf(" %d,", num1);
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

    return 0;
}
