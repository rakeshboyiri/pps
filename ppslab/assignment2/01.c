//1.write a program to remove the duplicate elements in an array
/*
#include<stdio.h>
void main()
{
    //declering the variables 
    int i,j,n;
    printf("Enter the size of an array : ");
    //reading size of an array
    scanf("%d",&n);
    //declearing the original array
    int a[n];
    //decleraing the temperary array to store the elements after removing of duplicates
    int temp[n];
    printf("Enter the elements :\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    /*
    sort the original array
    it is easier to remove duplicates from a sorted array    
    */   
    /*
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    //removing the duplicates from an origianl array after storing the elements and stored in temp array
    int pos=0;
    printf("After removing \n");
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            temp[pos]=a[i];
            printf("%d ",temp[pos]);
            pos++;
        }
    }
}
//-------------------------------OR---------------------------------------
*/
#include<stdio.h>
void main()
{
    //declering the variables 
    int i,j,k,n;
    printf("Enter the size of an array : ");
    //reading size of an array
    scanf("%d",&n);
    //declearing the original array
    int a[n];   
    printf("Enter the elements :\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}   