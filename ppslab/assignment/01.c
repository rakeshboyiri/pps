/*
    1. 1.Write a C program to count number of digits in a number..
    input:123
    Output:3
*/
#include<stdio.h>
int main()
{
    int count=0,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        count++;
       num=num/10;
    }
    printf("Count = %d",count);
}
