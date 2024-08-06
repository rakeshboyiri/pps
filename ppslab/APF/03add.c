/*
    c. Write a C program that uses functions to perform the following:
     Addition of Two Matrices
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
    int m1[r1][c1];
    int m2[r2][c2];
    scanf("%d",&c2);
    if(r1==r2 && c1==c2)
    {
        printf("Enter values of First matrix : \n");
        for(i=0;i<r1;i++)
        {            
            for(j=0;j<c1;j++)
            {
                printf("a%d%d: ",i+1,j+1);
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Enter values of second matrix : ");
        for(i=0;i<r1;i++)
        {           
            for(j=0;j<c1;j++)
            {
                printf("b%d%d: ",i+1,j+1);
                scanf("%d",&m2[i][j]);
            }
        }
        int result[r1][c1];
        printf("------------Resultant matrix -----------\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                result[i][j]=m1[i][j]+m2[i][j];
                printf("%d  ",result[i][j]);

            }
            printf("\n\n");
        }
    }


}