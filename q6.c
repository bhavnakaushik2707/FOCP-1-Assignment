/*Q6. Create a C program that allows the user to convert between Binary and Decimal systems based 
on their choice, showcasing understanding of data encoding and computer number systems used in 
hardware-level design. */
#include <stdio.h>
#include <math.h>

int main() {
    int c,n;
    printf("Enter your choice:\n");
    printf("1.Binary to decimal\n");
    printf("2.Decimal to binary\n");
    scanf("%d", &c);

    if (c == 1) {
        int d = 0, i = 0, rem;
        printf("Enter binary number: ");
        scanf("%d", &n);
        while (n != 0) {
            rem = n % 10;
            n /= 10;
            d += rem * pow(2, i);
            i++;
        }
        printf("Decimal: %d\n", d);
    } 
    else if (c == 2) {
        int b[32], i = 0;
        printf("Enter decimal number: ");
        scanf("%d", &n);
        while (n > 0) {
            b[i] = n % 2;
            n /= 2;
            i++;
        }
        printf("Binary: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", b[j]);
        }
        printf("\n");
    }

    else {
        printf("Invalid choice.\n");
    }

   return 0;

}