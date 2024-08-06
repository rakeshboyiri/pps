/*
    a. Write a program for finding the max and min from the three numbers.int
*/
#include<stdio.h>
int main()
{
    int p,t,r;
    float intrest;
    printf("Enter principle amount : ");
    scanf("%d",&p);
    printf("Enter Rate : ");
    scanf("%d",&r);
    printf("Enter time : ");
    scanf("%d",&t);
    intrest=(p*t*r)/100.0;
    printf("simple intrest = %f",intrest);

    return 0;
}