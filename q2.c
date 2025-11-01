/*Construct a C program to find the HCF (Highest Common Factor) of two integers using
iterative or recursive logic — a core operation in optimisation algorithms and cryptographic
computations.*/

#include <stdio.h>
int main()
{
    int n1, n2, i, hcf;
    printf("enter n1:");
    scanf("%d",&n1);
    printf("enter n2:");
    scanf("%d",&n2);
 
    for (i = 1;i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }

    printf("%d", hcf);
    return 0;
}