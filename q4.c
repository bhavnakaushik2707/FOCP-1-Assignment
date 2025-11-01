/*Implement a C program to swap two numbers using four different methods, demonstrating 
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable 
usage — a key skill in memory and variable management.*/

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap(arthmetic operator) a=%d b=%d",a,b);
    
    
    printf("\n");


    int c,d;
    printf("Enter c ");
    scanf("%d",&c);
    printf("Enter d");
    scanf("%d",&d);
    c=c^d;
    d=c^d;
    c=c^d;
    printf("After swap(bitwise)c=%d d=%d",c,d);
    printf("\n");


    int e,f,temp;
    printf("enter e");
    scanf("%d",&e);
    printf("enter f");
    scanf("%d",&f);
    int *ptr1=&e;
    int *ptr2=&f;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("The swap(poniter) e=%d f=%d",e,f);
    printf("\n");

    int g,h,tempr;
    printf("enter g");
    scanf("%d",&g);
    printf("enter h");
    scanf("%d",&h);
    tempr=g;
    g=h;
    h=tempr;
    printf("The swap(temperary variable) g=%d h=%d",g,h);



    return 0;
}