/*
    Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.
*/
#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i>=2)
        {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
                

            }
        }
        if(c==0)
        {
            printf("\n%d",i);
            ;
        }
        c=0;
        }
        

    }
}