#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5};
    int sum=*a;
    for(int i=1;i<5;i++)
    {
        *(a+i)=*(a+i-1)+*(a+i);
    }
     for(int i=0;i<5;i++)
    {
        printf("%d ",*(a+i));
    }
}