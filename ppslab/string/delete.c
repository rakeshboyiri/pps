//To delete n Characters from a given position in a given string.

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100];
    char str2[100];
    int pos,i,n;
    printf("Enter the  string : ");
    gets(str1);    
    printf("Enter the position and no. of characters be delete : ");
    scanf("%d%d",&pos,&n);
    int l1=strlen(str1);

    if(pos<l1)
    {
        for(i=pos+n;i<l1;i++)
        {
            str1[i-n]=str1[i];
        }
        str1[i-n]='\0';

        puts(str1);
    }
    else
    {
        printf("Invalid entry");
    }
    


}