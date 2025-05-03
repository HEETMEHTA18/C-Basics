#include<stdio.h>
int main(){
    float Number1,Number2;//VARIABLE DECLARATION
    char op;

    printf("Please Enter Number 1 Bigger Than Number 2 \n");
    printf("Enter the First Number :: ");
    scanf("%f",&Number1);//INPUT
    printf("Enter the Second Number :: ");
    scanf("%f",&Number2);
    fflush(stdin);///CLEAR THE CMD TERMINAL
    printf("Enter The case :: ");
    scanf("%c",&op);


    switch(op){
    case '+':
        printf("The Sum of Numbers is :: %.1f \n",Number1+Number2);
        break;
    case '-':
        printf("The Subtraction of Numbers is :: %.1f \n",Number1-Number2);
        break;
    case '*':
        printf("The Multiplication of Numbers is :: %.1f \n",Number1*Number2);
        break;
    case '/':
        printf("The Sum of Numbers is :: %.1f \n",Number1/Number2);
        break;
    default:
        printf("Invalid Input! \n");
    }  // SWITCH CASE
    printf(".........................................................\n");
    printf("HEET MEHTA 24CE064");

return 0;
}
