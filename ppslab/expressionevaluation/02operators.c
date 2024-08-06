/*
    Write a C program, which takes two integer operands and one operator from the user, performs the operation and then prints the result. (Consider the operators +,-,*, /, % and use Switch Statement)
*/
#include<stdio.h>
void main()
{
    char operator;
    int a,b;
    printf("Enter operator (+,-,*,/,%% ) : ");
    scanf("%c",&operator);
    printf("Enter a and b numbers : ");
    scanf("%d%d",&a,&b);
    switch (operator)
    {
    case '+':
        printf("Addition =%d",a+b);
        break;
    case '-':
        printf("Substraction = %d",a-b);
        break;
    case '/':
        printf("Division = %d",a/b);
        break;
    case '*':
        printf("Multiplication = %d",a*b);
        break;
    case '%':
        printf("Remainder =%d",a%b);
        break;
    default:
        printf("Invalid Entry"); 
    }
}