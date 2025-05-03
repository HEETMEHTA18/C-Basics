#include<stdio.h>
int main(){
    float Celsius;// VARIABLE DECLARATION
    float Fahrenheit;

    printf("Enter The Tempreture in Celsius :: ");
    scanf("%f",&Celsius);//INPUT OF CELSIUS

    Fahrenheit = (Celsius * (9.0/5.0)) + 32 ;//LOGIC
    printf("The Tempreture in Fahrenheit is :: %.2f \n",Fahrenheit);//PRINTING STATEMENTS
    printf("..................................\n");
    printf("HEET MEHTA 24CE064");
    return 0;
}

