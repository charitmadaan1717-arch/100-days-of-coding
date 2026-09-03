 //Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 #include<stdio.h>
int main(){
    float length,width,perimeter,area;
    printf("Enter length");
    scanf("%f",&length);
    printf("Enter width");
    scanf("%f",&width);
    perimeter = length+length+width+width;
    area = length*width;
    printf("perimeter is = %F",perimeter);
    printf("\narea is = %f",area);
    return 0;
}  