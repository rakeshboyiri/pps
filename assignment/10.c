/*
    10.Write a C program to print all Perfect numbers between 1 to n.
*/
#include<stdio.h>
int perfect();
int main()
{
    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        perfect(i);
    }
}
int perfect(int x)
{
    int sum=0,j;
    for(j=1;j<=x/2;j++)
    {
        if(x%j==0)
        {
            sum+=j;
        }
    }
    if(sum==x)
    {
        printf("%d\n",x);
    }    
}
