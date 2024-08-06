//2.Write a program in C to concatenate two strings without using string library functions.

#include<stdio.h>
void main()
{
    //declaring the string variables
    char str1[100];
    char str2[100];
    printf("Enter the first string : ");
    //reading the first string 
    gets(str1);
    printf("Enter the second string : ");
    //readinwg the second string
    gets(str2);
    //to count the length of first string 
    int l1=0;
    while(str1[l1]!='\0')
    {
        l1++;
    }
    //adding the second string charactres to at the end of the first string
    for(int i=0;str2[i]!='\0';i++,++l1)
    {
        str1[l1]=str2[i];
    }
    //adding the NULL character at the end of the first string to terminate the string 
    str1[l1]='\0';
    //printing the first string the concatenate
    puts(str1);
}