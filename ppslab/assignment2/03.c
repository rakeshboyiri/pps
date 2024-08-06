//Write a program in C to copy one string into another without using string library functions.

#include<stdio.h>
void main()
{
    //declearing the string variables 
    char str1[100];
    char str2[100];
    printf("enter the first string : ");
    //reading the first string
    gets(str1);
    printf("Enter the second string : ");
    //reading the second string
    gets(str2);
    //coping elements from second string to first string 
    int i;
    for( i=0;str2[i]!='\0';i++)
    {
        str1[i]=str2[i];
    }
    //assingng the last charcter as null character in str1
    str1[i+1]='\0';
    //printing the first string after copying from second string
    puts(str1);
}