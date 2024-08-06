//c program t delete no.of characters from given position in a string 

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter the string :");
    gets(str);
    int pos,n,i;
    printf("enter the position to delete :");
    scanf("%d",&pos);
    printf("Enter the no.of elements to delete :");
    scanf("%d",&n);
    int l=strlen(str);
    if((pos+n)<l)
    {
        for(i=pos;i<l;i++)
        {            
            str[i]=str[i+n];
        }
        str[l-n]='\0';
        puts(str);
    }
    else
        printf("INVALID ENTRY\n");
    
}