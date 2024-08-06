#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;       
    printf("Enter the size of array : ");
    scanf("%d",&n);
    char str[n][20];
    char temp[20]; 
    printf("Enter the elements : \n");
    for(i=0;i<n+1;i++)
    {
        gets(str[i]);
    }
    printf("Sorted strings\n");
    for(i=0;i<n+1;i++)
    {
        for(j=i+1;j<n+1;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0;i<n+1;i++)
    {
        puts(str[i]);
    }
}