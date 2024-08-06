/*
    Write a C program which copies one file to another, replacing all lowercase characters 
    with their uppercase equivalents.
*/
#include<stdio.h>
int main()
{   
    //reading files
    FILE *f1=fopen("f1.txt","r");
    FILE *f2=fopen("f2.txt","w");
    if(f1==NULL)
    {
        printf("FIle not found\n");
        return 0;
    }
    char ch;
    while((ch=fgetc(f1))!=EOF)
    {
        //checking for whether the character is lowecase
        if(ch>='a' && ch<='z')
        {
            //converting character into uppercase
            fputc(ch-32,f2);
        }
        else
        {
            fputc(ch,f2);
        }
    }
    fclose(f1);
    fclose(f2);

    return 0;

}