//Write a C program to display the contents of a file to standard output device.
#include<stdio.h>
int main()
{
    FILE *fp;
    //reading text file
    fp=fopen("f1.txt","r");
    //checking for file 
    if(fp==NULL)
    {
        printf("File not found\n");
        return 0;
    }
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;

}