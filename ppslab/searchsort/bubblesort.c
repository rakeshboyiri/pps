#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //bubble sorting
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;     
}