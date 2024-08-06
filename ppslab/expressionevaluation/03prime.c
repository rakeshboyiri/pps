/*
    Write a program that finds if a given number is a prime number
*/
#include<stdio.h>
int main()
{
    int number,i,c=1;
    printf("Enter a number : ");
    scanf("%d",&number);
    for(i=1;i<=number/2;i++)
    {
        if(number%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("%d is a prime number",number);
    }
    else
    {
        printf("%d is not a prime",number);
    }

}