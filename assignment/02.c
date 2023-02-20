/*
    2.write a c program to find first and last digit of a number
    Input:123
    Output:first digit 1
    Last digit 3
*/
#include<stdio.h>
int main()
{
    int num,rem,last_digit,first_digit;
    printf("Enter a number : ");
    scanf("%d",&num);
    last_digit=num%10;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
    }
    first_digit=rem;
    printf("First digit=%d\n",first_digit);
    printf("Last Digit=%d\n",last_digit);
}
