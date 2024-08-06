#include<stdio.h>
int linerfun();
int main()
{
    int n,i,ele;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&ele);
    //Calling function
    int x=linerfun(a,n,ele);
    if(x==-1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at %d index\n",x);
    }

    return 0;


}
int linerfun(int a[],int n,int ele)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            return i;
        }
    }
    return -1;
}