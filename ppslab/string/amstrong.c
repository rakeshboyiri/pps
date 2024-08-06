#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,rem,num;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //for count
        num=i;
        int c=0;
        while(num!=0)
        {
            c++;
            num/=10;
        }
        num=i;
        int sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum+=pow(rem,c);
            num/=10;

        }
        if(i==sum)
        {
            printf("%d\n",i);
        }

    }

}