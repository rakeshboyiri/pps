/*
    Write a C program to merge two files into a third file (i.e., 
    the contents of the first file followed by those of the second are put in the third file).
*/
#include<stdio.h>
int main()
{
    FILE *fp1=fopen("f1.txt","r");
    FILE *fp2=fopen("f2.txt","r");   
    if(fp1==NULL && fp2==NULL)
    {
        printf("Files not found\n");
        return 0;
    }
    FILE *fp3=fopen("f3.txt","w");
    char ch;
    while((ch=getc(fp1))!=EOF)
    {
        putc(ch,fp3);
    }
      while((ch=getc(fp2))!=EOF)
    {
        putc(ch,fp3);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}