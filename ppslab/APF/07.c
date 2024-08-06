/*
    To find the GCD (greatest common divisor) of two given integers.
*/
#include<stdio.h>
int recgcd();
int nonrecgcd();
int recgcd();
void main()
{
    int num1,num2;
    printf("Enter number1 and number2 : ");
    scanf("%d%d",&num1,&num2);
    printf("GCD of %d and %d is %d using non recursive function\n",num1,num2,nonrecgcd(num1,num2));
    printf("GCD of %d and %d is %d using recursion\n",num1,num2,recgcd(num1,num2));    
}
int nonrecgcd(int num1,int num2)
{
    int rem;
    while(num2!=0)
    {
        rem=num1%num2;
        num1=num2;
        num2=rem; 
    }
    return num1;
}
int recgcd(int num1,int num2)
{
    if(num2==0)
    {
        return num1;
    }
    return recgcd(num2,num1%num2);
}