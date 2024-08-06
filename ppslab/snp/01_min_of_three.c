/*
        a. Write a program for finding the maxfrom the three numbers.
*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a ,b , c numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is maximum\n",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is maximum",b);
    }
    else
    {
        printf("%d is maximum\n",c);
    }
}