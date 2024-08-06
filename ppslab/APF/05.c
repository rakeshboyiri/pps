
/*
   Write C programs that use both recursive and non-recursive functions.
*/
#include <stdio.h> 
int recfactorial();
int nonrecfactorial();

void main()
{
   int n, a, b;
   printf("Enter any number : ");
   scanf("%d", &n);
   a = recfactorial(n);
   b = nonrecfactorial(n);
   printf("The factorial of a given number using recursion is %d \n", a);   
   printf("The factorial of a given number using nonrecursion is %d \n", b);   
}
int recfactorial(int x)
{
   int f;
   if(x == 0)
   {
    return(1);
   }
   else
   {
    f = x * recfactorial(x - 1);
    
   }
   return(f);
}
int nonrecfactorial(int x)
{
   int i, f = 1;
   for(i = 1;i <= x; i++)
   {
      f = f * i;
   }
   return(f);
}