#include<stdio.h>
void main()
{
    int n;
    printf("Enter the decimal number :");
    scanf("%d",&n);
    while(n>0)
    {
        if(n>=50)
        {
            printf("L");
            n=n-50;
        }
        else if(n>=40)
        {
            printf("XL");
            n=n-40;
        }
        else if(n>=10)
        {
            printf("X");
            n=n-10;
        }
        else if(n>=9)
        {
            printf("IX");
            n=n-9;
        }
        else if(n>=5)
        {
            printf("V");
            n=n-5;
        }
        else if (n>=4)
        {
            printf("IX");
            n=n-4;
        }
        else if(n>=1)
        {
            printf("I");
            n=n-1;
        }
    }
    printf("\n");

}