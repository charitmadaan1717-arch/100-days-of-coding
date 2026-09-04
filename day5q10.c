//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    float second,minutes,hours;
    printf("Enter time in second :");
    scanf("%f",&second);
    minutes=second/60;
    hours=second/3600;
    printf("Time in minutes : %f",minutes);
    printf("Time in hours :%f",hours);
    return 0;
}