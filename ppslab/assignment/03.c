/*
    3. Write a C program to find whether a given year is a leap year or not
*/

#include<stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("%d is leap year");
    }
    else
    {
        printf("%d is not a leap year");
    }
}