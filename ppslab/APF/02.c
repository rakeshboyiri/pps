/*
    Write a function to compute mean, variance, Standard Deviation, 
    sorting of n elements in a single dimension array.
*/
#include <stdio.h>
#include <math.h> 
void main()
{
    int  i,j,n,temp;
    float average, variance, std_deviation, sum = 0, varsum = 0;
 
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d real numbers \n", n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
        sum+=a[i];
    }   
    average = sum / (float)n;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
    {
        varsum = varsum + pow((a[i] - average), 2);
    }
    variance = varsum / (float)n;
    std_deviation = sqrt(variance);
    //compute sorting 
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
   
    printf("Average of all elements = %.2f\n", average);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);

    printf("-------After sorting------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
}