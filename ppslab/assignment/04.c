/*
    Write a C program to check whether a character is an alphabet, digit or special character. 
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        printf("Its is a alphabet\n");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is a special charecter\n");
    }
   
}