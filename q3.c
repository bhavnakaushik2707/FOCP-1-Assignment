/*Design a C program to subtract two integers without using the minus (-) operator, applying 
bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in 
embedded systems or processors. */
#include<stdio.h>


int main(){
    int a,b,ans;
    printf("Enter Two numbers to subtact-  ");
    scanf("%d%d",&a,&b);
    ans= a + (~b +1);
    printf("The answer is %d",ans);
    return 0;
}
