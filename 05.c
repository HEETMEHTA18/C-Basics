/* This is a program for The Meteorological Department of India needs to convert temperature readings 
from Celsius to Fahrenheit for their weather reports. */
#include<stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("Enter Temreture in Celsius :: ");
    scanf("%f",&celcius);
    fahrenheit = (celcius*(9.0/5.0))+32; // relation between celsius and fahrenheit
    printf("Tempreture in Fehranheit :: %.2f \n",fahrenheit);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}