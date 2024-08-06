/*
    Write a C program to read in two numbers, x and n, and then compute the 
    sum of this geometric progression: 1+x+x^2+x^3+	+x^n. For example: if n is 3 and x is 5,
     then the program
    computes 1+5+25+125.

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i,sum=1;
    printf("Enter X and N value : ");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(x,i);
    }
    printf("Sum=%d",sum);
}