//To insert a sub-string into a given main string from a given position.


#include<stdio.h>
#include<string.h>

void main()
{
    //declaring the string variables
    char str1[100];
    char str2[100];
    int i,p;
    printf("Enter first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    printf("Enter the position to insert : ");
    scanf("%d",&p);
    int l1=strlen(str1);
    int l2=strlen(str2);
    for(i=l1-1;i>=p;i--)
    {
        str1[i+l2]=str1[i];
    }
    for(i=0;str2[i]!='\0';i++)
    {
        str1[p+i]=str2[i];
    }
    str1[l1+l2]='\0';
    puts(str1);
}