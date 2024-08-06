/*
    A building has 10 floors with a floor height of 3 meters each. A ball is dropped from the top of the building. Find the time taken by the ball to reach each floor. (Use the formula s = ut+(1/2)at^2 where u and a are the initial velocity in m/sec (= 0) and acceleration in m/sec^2 (= 9.8 m/s^2)).
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int time_interval,counter,time;
    float accl,velos,distance=0;
    printf("No of time intervals : ");    
    scanf("%d",&time_interval);
    for(counter=1;counter<=time_interval;counter++)
    {
        printf("AT T%d TIME(sec) : ",counter);
        scanf("%d",&time);
        printf("VELOCITY AT %dsec (m/sec) : ",time);
        scanf("%f",&velos);
        printf("ACCELERATION AT %dsec (m/sec^2)",time);
        scanf("%f",&accl);
        distance+=(velos*time+(accl*pow(time,2))/2);
    }
    printf  ("THE TOTALL DISTANCE TRAVELLED IN %d TIME INTERVALS BY VECHILE = %f",time_interval,distance);
} 