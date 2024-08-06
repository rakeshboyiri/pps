/*

    6. Write a C program to find LCM of two numbers.
    Input
    number: 12
    number2: 30
    Output
    LCM of 12 and 30: 60
*/
#include<stdio.h>
int main()
{
    int num1,num2,great;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        great=num1;
    }
    else
    {
        great=num2;
    }
    while(great%num1!=0 && great%num2!=0)
    {
        great++;
    }
    printf("LCM=%d",great);
}