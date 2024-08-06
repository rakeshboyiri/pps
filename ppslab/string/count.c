#include<stdio.h>
void main()
{
    char str[100];
    int i,word=1,ch=0,w=0,lines=1;
    printf("Enter the string : ");
    scanf("%[^~]",str);
    char p;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
            ch++;
            
        }
        if(str[i]==' ' || str[i]=='\t')
        {
            if(p!=' ' && p!='\t')
            {
                w++;
            }
        }
        if(str[i]=='\n')
        {
            lines++;
        }
         if(str[i]!=' ')
        {
           if(str[i-1]==' ' || str[i-1]=='\n')
            {
                 word++;
            }           
        }
        p=str[i];
    }
    printf("char=%d\nwords=%d\nlines=%d\nwhitespaces=%d\n",ch,word,lines,w);
}