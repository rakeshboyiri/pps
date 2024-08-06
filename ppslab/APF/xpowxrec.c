#include<stdio.h>
int recfun();
int nonrecfun();
int main()
{
    int x,n;
    printf("Enter X and N value : ");
    scanf("%d%d",&x,&n);
    int val=recfun(x,n);
    printf("value wit recurscive function =%d\n",val);
    x=nonrecfun(x,n);
    printf("\nvalue with non recursive function = %d\n",x);
    return 0;
}
int recfun(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else 
    {
        return x*recfun(x,n-1);
    }
}
int nonrecfun(int x,int n)
{
    int i,sum=x;

    for(i=1;i<n;i++)
    {
        sum*=x;
    }
   return sum;
}