#include<stdio.h>
int binaryfun();
int main()
{
    int n,i,j,ele,temp;
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
    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    //Calling function
    int x=binaryfun(a,n,ele);
    if(x==-1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nElement found at %d index\n",x);
    }
    return 0;
}
int binaryfun(int a[],int n,int ele)
{
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==ele)
        {
            return mid;
        }
        else if(a[mid]<ele)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}