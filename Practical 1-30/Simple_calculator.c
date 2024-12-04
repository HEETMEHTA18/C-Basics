/* This is a program for The Finance Department needs a simple calculator 
program to perform basic arithmetic operations for internal calculations. */
#include<stdio.h>
int main(){
    float a=68,b=22; // we give two fixed value as told
    char opration;
    printf("Choose opration from this [+,-,*,/] :: ");
    scanf("%c",&opration);
    switch(opration){
        case '+':
        printf("a + b = %.2f \n",a+b); // addition of two numbers
        break;
        case '-':
        printf("a - b = %.2f \n",a-b); // subtraction of two numbers
        break;
        case '*':
        printf("a x b = %.2f \n",a*b); // multiplication of two numbers
        break;
        case '/':
        printf("a / b = %.2f \n",a/b); // division of two numbers
        break;
        default:
        printf("Invalid Input! Enter Valid Input from [+,-,*,/] \n");
    }
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}