/*
    To find x^n
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,result;
    printf("Enter value of x and n : ");
    scanf("%d%d",&x,&n);
    result=pow(x,n);
    printf("%d\n",result);
}