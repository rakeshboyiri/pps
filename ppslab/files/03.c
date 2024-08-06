/*
    Write a C program to count the number of times a character occurs in a text file.
     The file name and the character are supplied as command line arguments
*/
#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp=fopen(("%s",argv[1]),"r");
    if(fp==NULL)
    {
        printf("File not found \n");
        return 0;
    }
    char ch;
    char *c=argv[2];
    int count=0;
    while((ch=getc(fp))!=EOF)
    {
        if(ch==*c)
        {
            count++;
        }
    }
    printf("the element occur %d times \n",count);
    fclose(fp);
    return 0;

}