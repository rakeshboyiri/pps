#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100];
    char str2[100];
    int l1=strlen(str1);
    int l2=strlen(str2);
    int pos,i;
    printf("Enter the string : ");
    gets(str1);
    printf("Enter the substring : ");
    gets(str2);
    printf("Enter the position to insert : ");
    scanf("%d",&pos);
   
    for(i=l1-2;i>=pos;i--)
    {
        str1[i+l2]=str1[i];
    }
    /*
    for(i=0;i<l2;i++)
    {
        str1[i+pos]=str2[i];
     

    }
    */

    str1[l1+l2-5]='\0';
    puts(str1);
    
}