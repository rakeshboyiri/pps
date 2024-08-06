#include<stdio.h>
int main()
{
    int n,i,j,max,k,t;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //sorting 
    for(i=0;i<n-1;i++)
    {
        max=i;        
        for(j=i+1;j<n;j++)
            {
                if(a[max]<a[j])
                {
                    max=j;
                }
            }
            t=a[i];
            a[i]=a[max];
            a[max]=t;

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}