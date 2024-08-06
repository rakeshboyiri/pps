/*
    Write a C program to find the roots of a Quadratic equation.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2,real,imaginary;
    printf("Enter a , b , c : ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;  
    if(d==0)
    {
        printf("\nReal and Equal roots");  
        r1=(-b+sqrt(d))/2*a;
    	r2=(-b-sqrt(d))/2*a;      
        printf("\n%0.2f",r1);
        printf("\n%0.2f",r2);
    }
    else if(d>0)
    {
        printf("\nReal and not equal roots");  
        r1=(-b+sqrt(d))/2*a;
    	r2=(-b-sqrt(d))/2*a;       
        printf("\n%0.2f",r1);
        printf("\n%0.2f",r2);
    }
    else
    {
        printf("Imaginary roots");    
        real=-(b/2*a);
        imaginary=sqrt(-d)/2*a;
    	
        printf("\n%0.2f + %0.2fi",real,imaginary);
        printf("\n%0.2f - %0.2fi",real,imaginary);
    }
    
}
