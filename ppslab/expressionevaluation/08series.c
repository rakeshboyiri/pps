/*
    Write a C program to calculate the following, where x is a fractional value. i. 1-x/2 +x^2/4-x^3/6
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,k=1;
    float sum=1.0,temp;
    printf("Enter value x : ");
    scanf("%d",&x);
    for(i=1;i<=3;i++)
    {    
        k=(k)*(-1); 
        sum=sum+k*(pow((float)x,i)/(2*(float)i));
       
    }
    printf("sum=%f",sum);
}