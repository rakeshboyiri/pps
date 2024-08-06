/*
    2.write a c program to find first and last digit of a number
    Input:123
    Output:first digit 1
    Last digit 3
*/
#include<stdio.h>
int main()
{
    int num,rem,lastdigit,firstdigit;
    printf("Enter a number : ");
    scanf("%d",&num);
    lastdigit=num%10;
    while(num!=0)
    {
        firstdigit=num%10;
        num=num/10;
    }
    printf("First digit=%d\n",firstdigit);
    printf("Last Digit=%d\n",lastdigit);
}