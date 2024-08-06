/*
    Write a program for reading elements using a pointer
     into an array and display the values using the array.
*/
#include<stdio.h>
void main()
{
    int n,*p,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    p=a;
    printf("Enter elements : \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",(p+i));       
    }
    printf("\n\nDisplay array\n\n");
    for(i=0;i<n;i++)
    {
         printf("%d\n",*(p+i));    
    }
}