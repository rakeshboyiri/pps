/*
    A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence. Write a C program to generate the first n terms of the sequence.
*/
#include<stdio.h>
int main()
{
    int num1=0,num2=1,n,count,fab,i;
    printf("Enter size of the series : ");
    scanf("%d",&n);
    printf("%d  %d",num1,num2);
    for(i=2;i<=n;i++)
    {
        fab=num1+num2;
        printf("    %d",fab);
        num1=num2;
        num2=fab;
    }

}