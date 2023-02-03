/*
c. Write a program that declares Class awarded for a given percentage of marks, where mark
<40%= Failed, 40% to <60% = Second class, 60% to <70%=First class, >= 70% = Distinction. Read percentage from standard input.
*/
#include<stdio.h>
int main()
{
    int pps,math,chem,eng,phy;
    float per;
    printf("Enter 5 subject marks : ");
    scanf("%d%d%d%d%d",&pps,&math,&chem,&eng,&phy);
    per=(pps+math+chem+eng+phy)/5;
    printf("percentage=%0.2f\n",per);
    if(per>=70)
    {
        printf("Distinction");
    }
    else if(per>=60 && per<70)
    {
        printf("First Class");
    }
    else if(per>=40 && per<60)
    {
        printf("Second class");
    }   
    else
    {
        printf("Failed");
    }

    return 0;
}