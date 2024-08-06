/*
    d. Write a program that prints a multiplication table for a given number and 
    the number of rows in the table. For example, for a number 5 and rows = 3, 
    the output should be:
    5 x 1 = 5
    5 x 2 = 10
*/
#include<stdio.h>
int main()
{
    int n,i,row;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;

}