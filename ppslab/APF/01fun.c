/*
    Write a C program to find the minimum, maximum and average in an array of integers.
*/
#include<stdio.h>
int minfun();
int maxfun();
float avgfun();
int sumfun();
int main()
{
    int n,i,check=-1;
    printf("Enter the array size  : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements ::\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);        
    }

    while(check!=0)
    {
   
    printf("\nEnter the choice\n1 for minumum number \n2 for maximum number\n3 for average \n");
    scanf("%d",&check);    
    switch(check)
    {
        case 1: printf("\nMinimum=%d\n",minfun(a,n));
                break;
        case 2: printf("\nMaximum=%d\n",maxfun(a,n));
                break;
        case 3: int sum=0;
                printf("\nAverage=%.3f\n",avgfun(a,&sum,n));
                printf("Sum=%d\n",sum);
                break;       
        case 0:
                printf("\nProgram succesfully exited\n");
                break;
        default:
            printf("\ninvalid entry \n");        
    }
    printf("------------------------------");
    }

    return 0;

    
}
int minfun(int a[],int n)
{
    int i;
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

int maxfun(int a[],int n)
{
    int i;
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
float avgfun(int a[],int *sum,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *sum+=a[i];
        printf("%d ",*sum);
    }
    return (*sum/(float)n);
    
}
