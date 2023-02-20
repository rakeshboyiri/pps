/*         
    9. Write a C program to check whether a number is Perfect number or not.
    For example: 6 is the first perfect number
    divisors of 6 are 1, 2, 3
    Sum of its divisors = 1 + 2 + 3 = 6.
    Hence 6 is a perfect number.
*/
#include<stdio.h>
void main()
{
    int num,i,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(num==sum)
    {
        printf("%d is a perfect number\n",num);
    }
}
