/*
    Write a simple program that prints the results of all the operators available in C 
    (including pre/ post increment , bitwise and/or/not , etc.). Read required operand values 
    from standard input.
*/
#include<stdio.h>
void main()
{
    int a,b,var1,var2;
    float m;
    printf("Enter a and b values : ");
    scanf("%d%d",&a,&b);
    printf("Addition of a and b = %d\n",a+b);
    printf("Substraction of a and b = %d\n",a-b);
    printf("Multiplecation of a and b = %d\n",a*b);
    printf("remainder of a and b = %d\n",a%b);
    printf("Division of a and b = %d\n",a/b);
    var1=(a>0&&b<10);
    printf("Logical And=%d\n",var1);
    var2=(a==b)||(b!=0);
    printf("Logical OR NOT=%d\n",var2);
    printf("Bitwise And %d\n",a&b);
    printf("Bitwise Or=%d\n",a|b);
    printf("Bitwise NOT=%d\n",!a);
    printf("Bitwise complent=%d\n",~a);
    printf("Bitwise XOR=%d\n",a^b);
    printf("Bitwise Shift right of %d=%d\n",a,a>>2);
    printf("Bitwise Shift left of %d=%d\n",b,b<<3);
    printf("preincrement %d\n",++a);
    printf("postincrement %d\n",b++);
    printf("predecrement %d\n",a--);
    printf("postdecrement %d\n",b--);
}