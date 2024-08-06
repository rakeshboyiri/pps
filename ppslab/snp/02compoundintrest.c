#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r;
	float ci;
	printf("Enter p,t,r : ");
	scanf("%d%d%d",&p,&t,&r);
	ci=p*(pow(1+r/100.0,t))-p;
	printf("Compond intrest = %f",ci);
	
	return 0;
}