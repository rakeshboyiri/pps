/*
    Write a C program, which takes two integer operands and one operator from the user, 
    performs the operation and then prints the result.
    (Consider the operators +,-,*, /, % and use Switch Statement)
*/
#include<stdio.h>
void main()
{
    char op,c;
    int a,b;
    do
    {
        printf("\nSelect operator (+,-,/,*,%%) : ");
        
        scanf("%c",&op);
        printf("\nEnter Number : ");
        scanf("%d",&a);       
        printf("\nEnter Number : ");
        scanf("%d",&b);
        switch (op)
        {
        case '+':
            printf("\nAddition = %d",a+b);
            break;        
        case '-':
            printf("\nSubstarction = %d",a-b);
            break;
        case '*':
        	printf("\nMultiplication = %d",a*b);
            break;
        case '/':
        	printf("Division=%d",a/b);
            break;
        case '%':
        	printf("Remainder=%d",a%b);
            break;
        default:
			printf("Invalid entry");
        }

    printf("\nto repeat enter (y/n) : ");
    getchar();
    scanf("%c",&c);
    getchar();

         
    } while (c=='y');
}
