//6.write a program to find the largest element in an array using pointer
#include <stdio.h> 
  
int main() 
{ 
    int i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int *max =  &arr[0]; 
  
    for (i = 0; i < n; i++) 
    { 
        if (*max < *(p+i)) 
            *max = *(p+i); 
    } 
  
    printf("Largest element = %d", *max); 
    return 0; 
}