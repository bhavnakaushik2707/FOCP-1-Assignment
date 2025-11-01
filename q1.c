/*Q1. Develop a C program to check whether a given number is an Armstrong number or not, 
demonstrating understanding of number manipulation and digit-based computations used in digital 
verification systems. */
#include <stdio.h>
#include <math.h>
int main()
{
    int num,num1,rem,co =0,sum=0;
    printf("enter num");
    scanf("%d",&num);
    num1=num;
    while(num>0)
        {num/=10;
    co++;}
    num=num1;
    while(num>0)
    {
        rem=num%10;
        sum+=ceil(pow(rem,co));
        num=num/10;
    }
    if(sum==num1)
        {printf("\nit is a armstrong number");}
    else
        {printf("\nit is not a armstrong number");}

    return 0;
}
