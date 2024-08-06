#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter row size : ");
    scanf("%d",&row);
    printf("Enter column size : ");
    scanf("%d",&col);
    int a[row][col];
    int t[col][row];
    printf("Enter elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a%d%d = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }       
    }
    printf("Original matrix\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n\n");
    }   
    //transpose
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            t[j][i]=a[i][j];
        }        
    }
    printf("After transpose\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",t[i][j]);    
        }
        printf("\n\n");
    }
    return 0;
}