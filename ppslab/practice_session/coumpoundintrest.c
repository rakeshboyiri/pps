#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,n;
	float ci;
	printf("Enter p,r,n : ");
	scanf("%d%d%d",&p,&r,&n);
	ci=p*(pow(1+(float)r/100,n))-p;
	printf("Compond intrest = %f",ci);
	
	return 0;
}