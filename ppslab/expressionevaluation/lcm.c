#include<stdio.h>
int main()
{
    int num1,num2,great;
    printf("Enter number1 and number2 : ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        great=num1;
    }
    else{
        great=num2;
    }
    while(1!=0)
    {
        if(great%num1==0 && great%num2==0)
        {
            printf("LCM=%d",great);
            break;
        }
        else
        {
            great++;
        }
    
    }
}