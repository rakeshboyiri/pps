#include<stdio.h>
void main()
{
    int i,j,row,col;
    printf("Enter size of row : ");
    scanf("%d",&row);
    printf("Enter size of column : ");
    scanf("%d",&col);
    int a[row][col],t[col][row];
    printf("-------Enter elements--------\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a%d%d=",i+1,j+1);
            scanf("%d",&a[i][j]);
            t[j][i]=a[i][j];
        }
    }
    //-----------------------------------------------
    
    printf("\n\nOriginal matrix\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    //-----------------------------------------------
  
    printf("\n\nTranspose matrix\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}