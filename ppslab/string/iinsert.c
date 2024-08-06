#include<stdio.h>
#include<string.h>
void main()
{
    //declaring the string variables 
    char str1[100];
    char str2[100];
    char str3[100];
    //declaring the i and pos=position to insert
    int i,pos;
    printf("Enter first string : ");
    //reading the first string
    gets(str1);
    printf("Enter second string : ");
    //reading the second string
    gets(str2);
    printf("Enter the position to insert : ");
    //reading the position to insert
    scanf("%d",&pos);
    //assiging lengths of string1 and string 2 in l1 and l2
    int l1=strlen(str1);
    int l2=strlen(str2);
    //checking for whether the insert position is less than the first string size
    if(pos<l1)
    {
        //copying first n characters upto insert position into the string3
        strncpy(str3,str1,pos);
        for(i=0;str2[i]!='\0';i++)
        {
            //copying string into string3 at the insert position
            str3[pos+i]=str2[i];
        }


        for(i=pos;str1[i]!='\0';i++)
        {
            //copying remaing characters from string1 into string3
            str3[i+l2]=str1[i];
        }
        //printing the string after the insert
        puts(str3);
    }

}