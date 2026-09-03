#include<stdio.h>
int main (){
    float radius;
    printf("Enter Radius : ");
    scanf("%f",&radius);
    float pi = 3.1415;
    float area = pi*radius*radius;
    printf("area of circle is : %f",area);
    float perimeter = 2*pi*radius;
    printf("\nperimeter of circle is : %f",perimeter);
    return 0;  
} 
