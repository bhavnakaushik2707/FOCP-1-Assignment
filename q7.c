/*. Develop a C program to print a binary pyramid pattern. 
0         0 
01       01 
010     010  
0101  0101  
0101001010*/


#include <stdio.h>

int main() {
    int n,i,j,spaces,space;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", (j+1) % 2);
        }
        int spaces= 2 * (n - i);
        for (int space = 1; space <= spaces; space++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", (j+1) % 2);
        }

        printf("\n");
    }

    return 0;
}