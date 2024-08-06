//5.Write a program in C to remove characters from a string except alphabets. 
/*
#include<stdio.h>
void main()
{
    //declaring the string variables
    char str[100];
    char tempstr[100];
    printf("Enter the string : ");
    //reading the string from user input
    gets(str);
    int pos=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        //checking whether the current character is alphabet or not
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z' )
        {
            tempstr[pos]=str[i];
            pos++;
        }
    }
    tempstr[pos]='\0';
    puts(tempstr);

}
*/
#include<stdio.h>
#include<ctype.h>
void main()
{
    //declaring the string variables
    char str[100];    
    printf("Enter the string : ");
    //reading the string from user input
    gets(str);
    int pos=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        //checking whether the current character is alphabet or not
       if(isalpha(str[i])==0)
       {
            str[i]=str[i+1];
       }
    }
    
    puts(str);
}