//Write a C program that displays the position of a character ch in the string S or
// – 1 if S doesn‘t contain ch.

#include<stdio.h>

void main()
{
    char str1[100];
    char ch;
    printf("Enter the string : ");
    gets(str1);
    printf("Enter the element to search : ");
    scanf("%c",&ch);
    int i,val=0;
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]==ch)
        {
            printf("%d\n",i);
            val=1;
            break;
        }
    }
    if(val==0)
    {
        printf("-1\n");
    }
}