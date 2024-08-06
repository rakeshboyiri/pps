#include<stdio.h>
int main()
{
    int i,j,n,min,t;
    printf("Enter the arrayy size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter thr elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //sorting
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        t=a[i];
        a[i]=a[min];
        a[min]=t;

    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}