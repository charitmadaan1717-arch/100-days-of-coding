//Write a program to convert temperature from Celsius to Fahrenheit
#include<stdio.h>
int main(){
    float Celsius,Fahrenheit,temperature;
    printf("Enter temperature in celsius :");
    scanf("%f",&Celsius);
    Fahrenheit = Celsius*9/5 + 32;
    printf("Temperature in fahrenheit is :%f",Fahrenheit);
    return 0;
}