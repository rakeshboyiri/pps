#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char str[]="mam";
    int l=0,h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            printf("Not a palindrome\n");
            exit(0);
        }
    }
    printf("Palindrome\n");
}