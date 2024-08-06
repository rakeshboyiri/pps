//4.Write a program in C to compare two strings without using string library functions.
#include <stdio.h>
void main()
{
   //declaring the string variables
   char str1[100], str2[100];
   int i;

   printf("Enter first string: ");
   //reading the first string 
   gets(str1);

   printf("Enter second string: ");
   //reading the second string 
   gets(str2);

   //comparing two strings
   i = 0;
   /*
      the condition in the while checking for both the elements at same index same or not
      if same,check the next character
      else,compare the charcter

   */
   while (str1[i] == str2[i] && str1[i] != '\0')
   {
      i++;
   }
   //check if str1 is greater than str2
   if (str1[i] > str2[i])
      printf("%s is greater than %s\n",str1,str2);
   else if (str1[i] < str2[i])
      printf("%s is greater than %s\n",str2,str1);
   else
      printf("Both are equal\n");
}