#include<stdio.h>
void main()
{
    int n,i,j,c;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n],t[n];
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        t[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                t[j]=0;
            }
        }
        if(t[i]!=0)
        {
            t[i]=c;
        }

    }
    for(i=0;i<n;i++)
    {
        if(t[i]!=0 && t[i]>1)
        {
            printf("%d is repeated %d times \n",a[i],t[i]);
        }
    }


}
