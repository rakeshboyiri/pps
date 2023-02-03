/*
    Write a C program to find the sum of individual digits of a positive integer and test given number is palindrome.
*/
#include<stdio.h>
int main()
{
    int n,r,a,sum=0,reverse=0;
  
    printf("Enter a number : ");
    scanf("%d",&n);
    a=n;
    while (n!=0)
    {
        r=n%10;
        sum=sum+r;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("\nSum of indiviual digits=%d",sum);
    if(reverse==a)
    {
        printf("\n%d is a palindrome",a);
    }
    else
    {
        printf("\n%d is not a palindrome",a);
    }    
}