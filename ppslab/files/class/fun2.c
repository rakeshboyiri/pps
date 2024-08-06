#include<stdio.h>
void sum(int,int);	/* function prototype */
void main ()
{
	int a, b;
	printf ("\n Enter the values of a and b:  ");
	scanf ("%d%d", &a, &b);  
	sum (a, b);    /*calling function */
}
void sum (int x, int y)	/* function definition */
{
	int z;
	z=x+y;
	printf ("\n The Sum =%d", z);
}
