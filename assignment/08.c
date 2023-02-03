/*
    8. Write a C program to print all Armstrong numbers between 1 to n.
*/
#include<stdio.h>
#include<math.h>
int amstrong();
int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        amstrong(i);
     
    }
}
int amstrong(int x)
{
    int rem,s=0,num=x;
    while(x!=0)
    {
        rem=x%10;      
        s=s+pow(rem,3);
        x=x/10;
    }
    if(s==num)
    {
        printf("%d\n",s);
    }
}