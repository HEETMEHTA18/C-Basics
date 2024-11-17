// This is a Program for calculate the area and perimeter of a rectangular plot of land for planning purposes //
#include<stdio.h>
int main(){
    float length = 50; // lenght in meters
    float breadth = 30; // breadth in meters
    float area,perimeter;
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    printf("\nThe Perimeter of Rectangle is :: %.2f meter\n",perimeter);
    printf("The Area of Rectangle is :: %.2f meter square\n",area);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}