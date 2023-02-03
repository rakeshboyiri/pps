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
       

        }

    printf("\nto repeat enter (y/n) : ");
   gets(&c);

         
    } while (c=='y');
}