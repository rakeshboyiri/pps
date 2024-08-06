/*
    A building has 10 floors with a floor height of 3 meters each. 
    A ball is dropped from the top of the building. 
    Find the time taken by the ball to reach each floor.
     (Use the formula s = ut+(1/2)at^2 where u and a are the initial velocity in m/sec (= 0) 
     and acceleration in m/sec^2 (= 9.8 m/s^2)).
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int f=10,s=30;
    float t,a=9.8;
    while(f>0)
    {
        t=sqrt(2*s/a);
        printf("\n at %d floor time=%0.2fsec",f,t);
        f--;
        s=s-3;
    
    }
    
} 