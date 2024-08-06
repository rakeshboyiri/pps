/*
    Write a function to compute mean, variance, Standard Deviation, 
    sorting of n elements in a single dimension array.
*/
#include<stdio.h>
#include<math.h>

float meanfun();
float variancefun();

int main()
{
   int n,i;
   printf("Enter the array size : ");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements :\n");
   for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
   } 
   float mean=meanfun(a,n);
   float variance=variancefun(&mean,a);
   float deviation=sqrt(variance);

   printf("Mean of elements=%.3f\n",mean);
   printf("Variance=%.3f\n",variance);
   printf("Deviation=%.3f\n",deviation);
}
float meanfun(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return (sum/(float)n);
}
float variancefun(float *mean,int a[])
{
    int i,n=5;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum+=pow(a[i]-*mean,2);
    }
    return (sum/(float)n);
}