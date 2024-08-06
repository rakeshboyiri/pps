/*
    h.Write a program that shows the binary equivalent of a given positive number between 0 to 255.
*/
#include<stdio.h>
long int decimalToBinary();
int main()
{
    
    long int result;
    for(int i=0;i<=255;i++)
    {
   
    result=decimalToBinary(i);
    printf("Equivalent Binary Number is %d: %ld\n",i,result);
    }

}
long decimalToBinary(int decimalnum)
{
    long binarynum=0;
    int rem,temp=1;
    while(decimalnum!=0)
    {
        rem=decimalnum%2;                  
        binarynum=binarynum+rem*temp;            
        temp=temp*10;
        decimalnum=decimalnum/2;    
       
    }
    return (binarynum);    
}
