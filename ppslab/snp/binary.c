/*
    h.Write a program that shows the binary equivalent of a given positive number between 0 to 255.
*/
#include<stdio.h>
int main()
{    
    int i,n,rem,temp;
    long int binary;
    for(i=0;i<=255;i++)
    {
        n=i,temp=1,binary=0;
        while(n!=0)
        {
            rem=n%2;
            binary=binary+(rem*temp);
            temp=temp*10;
            n=n/2;
        }
        printf("Binary equivalent of %d = %ld\n",i,binary);   
    }

}

