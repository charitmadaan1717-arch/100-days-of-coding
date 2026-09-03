//Write a program to input two numbers and display their sum, difference, product, and quotient
#include<stdio.h>
int main(){
    float x,y,sum,difference,product,qutient;
    printf("Enter x");
    scanf("%f",&x);
    printf("Enter y");
    scanf("%f",&y);
    sum = x + y;
    difference = x - y;
    product = x*y ;
    qutient = x/y;
    printf("sum is %f",sum);
     printf("\ndifference is %f",difference);
      printf("\nproduct is %f",product);
       printf("\nqutient is %f",qutient);
    return 0;
}  