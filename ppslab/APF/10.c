/*
         Write a program through a pointer variable to sum of n elements from an array.
*/
#include<stdio.h>
void main()
{
    int n,sum=0,*k,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    k=a;
    printf("-----Enter elements----\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",k+i);
        sum+=*(k+i);
    }
    printf("Sum = %d",sum);
}
