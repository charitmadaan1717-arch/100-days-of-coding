#include<stdio.h>
int main(){
    float x,y;
    printf("Enter x :");
    scanf("%f",&x);
    printf("Enter y :");
    scanf("%f",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x:%f",x);
    printf("\ny:%f",y);
    return 0;
} 