//To find the GCD (greatest common divisor) of two given integers.
#include<stdio.h>
int gcd();
int main()
{
    int num1,num2,x;
    printf("Enter number1 and number2 : \n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        x=gcd(num1,num2);
    }
    else
    {
        x=gcd(num2,num1);
    }
    printf("\n%d\n",x);
    return 0;
}

int gcd(int num1,int num2)
{
    if(num2!=0)
    {
        return gcd(num2,num1%num2);
    }
    else 
    {
        return num1;
    }
}