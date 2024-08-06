/*
    A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1. 
    Subsequent terms are found by adding the preceding two terms in the sequence. 
    Write a C program to generate the first n terms of the sequence.
*/
#include<stdio.h>
int main()
{
    int num1=0,num2=1,n,fib,i;
    printf("Enter size of the series : ");
    scanf("%d",&n);    
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            fib=i;
        }
        else
        {
            fib=num1+num2;
            num1=num2;
            num2=fib;
        }
        printf("%d ",fib);
        
    }

    return 0;
}
