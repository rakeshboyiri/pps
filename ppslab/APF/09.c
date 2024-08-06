/*
    Write a program for display values reverse order from an array using a pointer.
*/
#include<stdio.h>
void main()
{
    int n,i,*p;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    p=a;
    printf("Enter elements :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("--Reverse order---\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",*(p+i));
    }
    
}