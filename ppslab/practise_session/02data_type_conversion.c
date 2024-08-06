/*
        b. Write a simple program that converts one given data type to another using auto 
        conversion and casting. Take the values from standard input.
*/
#include<stdio.h>
void main()
{
    int i,x;
    float f;
    double d;
    short s;
    printf("Enter integer value : ");
    scanf("%d",&i);
    printf("Enter float value : ");
    scanf("%f",&f);
    d=i;//implict conversion
    printf("Implict value is %lf\n",d);
    x=(int)f;//explict conversion
    printf("Explict value=%d\n",x);    
}