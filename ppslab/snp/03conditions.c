/*
c. Write a program that declares Class awarded for a given percentage of marks, where mark
<40%= Failed, 40% to <60% = Second class, 60% to <70%=First class, >= 70% = Distinction. Read percentage from standard input.
*/
#include<stdio.h>
int main()
{
    int per;
    printf("Enter percentage : ");
    scanf("%d",&per);    
    if(per>=70)
    {
        printf("Distinction\n");
    }
    else if(per>=60 && per<70)
    {
        printf("First Class\n");
    }
    else if(per>=40 && per<60)
    {
        printf("Second class\n");
    }   
    else
    {
        printf("Failed\n");
    }

    return 0;
}