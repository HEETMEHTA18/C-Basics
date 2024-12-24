#include<stdio.h>
void Area(float);
void Perimeter(float);
int main()
{
    float radius;
    radius=8;
    Area(radius);
    Perimeter(radius);
    return 0;
}
void Area(float a)
{
float area;
area=3.14*a*a;
printf("Area Of The Given Radius is:: %.2f\n",area);
}
void Perimeter(float b)
{
float perimeter;
perimeter=2*3.14*b;
printf("Perimeter Of The Given Radius is:: %.2f\n",perimeter);
}
