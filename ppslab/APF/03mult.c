/*
        
    03 Write a C program that uses functions to perform the following:   
    Multiplication of Two Matrices
*/
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j;
    printf("Enter First matrix row size : ");
    scanf("%d",&r1);
    printf("Enter first matrix column size : ");
    scanf("%d",&c1);
    printf("Enter second matrix row size : ");
    scanf("%d",&r2);
    printf("Enter second matrix column size : ");    
    scanf("%d",&c2);
    if(c1==r2)
    {
        int m1[r1][c1];
        int m2[r2][c2];
        printf("Enter values of First matrix : \n");
        for(i=0;i<r1;i++)
        {            
            for(j=0;j<c1;j++)
            {
                printf("a%d%d: ",i,j);
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Enter values of second matrix : \n");
        for(i=0;i<r2;i++)
        {            
            for(j=0;j<c2;j++)
            {
                printf("b%d%d: ",i,j);
                scanf("%d",&m2[i][j]);
            }
        }
        int result[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                result[i][j]=0;
                for(int k=0;k<r2;k++)
                {
                    result[i][j]=result[i][j]+m1[i][k]*m2[k][j];
                }
            }
        }
        printf("------------Resultant matrix -----------\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d  ",result[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    printf("Invalid dimensions");
    return 0;
}