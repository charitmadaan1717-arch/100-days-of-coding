//Write a program to calculate simple and compound interest for given principal, rate, and time
#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("Enter Principal : ");
    scanf("%f",&principal);
    printf("Enter Rate : ");
    scanf("%f",&rate);
    printf("Enter Time : ");
    scanf("%f",&time);
    si = (principal*rate*time)/100;
    printf("simple intrest is : %f",si);
    return 0;
} 