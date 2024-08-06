/*
    Write a C program to find the minimum, maximum and average in an array of integers.
*/
#include<stdio.h>
int main()
{
    int i,sum=0,n,min,max;
    float avg;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements :\n");
     for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    min=a[0];
   //Minimum Number 
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }        
    }  
    //maximum number 
    max=a[0];
     for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }        
    } 
    avg=sum/n;
    printf("\nMinimum = %d",min);
    printf("\nMaximum = %d",max);
    printf("\nsum = %d",sum);
    printf("\nAverage = %0.2f",avg);
}
    