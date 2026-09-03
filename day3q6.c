#include<stdio.h>
int main(){
    float x,y,z;
    printf("Enter x :");
    scanf("%f",&x);
    printf("Enter y :");
    scanf("%f",&y);
    z=x;
    x=y;
    y=z;
    printf("x:%f",x);
    printf("\ny:%f",y);
    return 0;
}  