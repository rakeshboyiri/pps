
#include<stdio.h>
void main()
{
    int a[]={5,2,4,1,3},temp;
    for(int i;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(*(a+j)<*(a+i))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
        {
            printf("%d",*(a+i));
        }
}