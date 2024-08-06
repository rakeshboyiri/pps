/*
         
    5. Write a C program to find HCF (GCD) of two numbers.
    Input
    number: 12
    number2: 30
    Output
    HCF of 12 and 30: 6
*/
#include<stdio.h>
int main()
{
    int num1,num2,i,hcf,small;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    if(num1<num2)
    {
        small=num1;
    }
    else
    {
        small=num2;
    }
    for(i=1;i<=small;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF=%d",hcf);
}