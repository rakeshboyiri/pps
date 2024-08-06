#include<stdio.h>
void main()
{
    char op,c;
    int a,b;
    do
    {
        printf("\nSelect operator (+,-,/,*,%%) : ");
        getchar();
        scanf("%c",&op);
        printf("\nEnter Number : ");
        //scanf("%d",&a);     
         fscanf(stdin,"%d",&a);  
        printf("\nEnter Number : ");
        fscanf(stdin,"%d",&b);
    
        switch (operator)
    {
    case '+':
        printf("Addition =%d",a+b);
        break;
    case '-':
        printf("Substarction = %d",a-b);
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

    printf("\nto repeat enter (y/n) : ");
    getchar();
    scanf("%c",&c);
   

         
    } while (c=='y');
}