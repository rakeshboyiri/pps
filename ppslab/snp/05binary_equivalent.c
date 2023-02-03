/*
    h.Write a program that shows the binary equivalent of a given positive number between 0 to 255.
*/
#include<stdio.h>
long int decimalToBinary();
int main()
{
    int decimalnum;
    long int result;
    printf("Enter a Decimal Number : ");
    scanf("%d",&decimalnum);
    result=decimalToBinary(decimalnum);
    printf("Equivalent Binary Number is : %ld",result);

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
