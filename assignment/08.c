/*
    8. Write a C program to print all Armstrong numbers between 1 to n.
*/
#include<stdio.h>
#include<math.h>
int amstrong();
int digit_count();
int main()
{
    int n,i,x;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	x=digit_count(i);
        amstrong(i,x);
     
    }
}
int digit_count(int x)
{
	int count=0;
	while(x!=0)
	{
		count++;
		x/=10;	
	}
	return count;
}
int amstrong(int x,int c)
{
    int rem,s=0,num=x;
    while(x!=0)
    {
        rem=x%10;      
        s=s+pow(rem,c);
        x=x/10;
    }
    if(s==num)
    {
        printf("%d\n",s);
    }
    
    return 0;
}
