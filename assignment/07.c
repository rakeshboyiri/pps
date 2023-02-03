/*
    7.Write a C program to find all prime factors of a number.
    Input
    Enter any number: 15
    Output
P   rime factors of 15: 3, 5
*/
#include<stdio.h>
int prime();
int main()
{
    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            prime(i);
        }
    }
}
int prime(int x)
{
    int c=0,i;
    if(x>=2)
    {
        for(i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
                c=1;
                break;
            }
        }
        if(c!=1)
        {
            printf("%d\n",x);
        }
    }
}