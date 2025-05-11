#include<stdio.h>
void main(){

    int Principal = 50000;//principal amount
    int Time = 3; // Time in Years
    float Rate = 5.5, SimpleInterest;// rate in percentage

    SimpleInterest = (Principal * Time * Rate) / 100.0 ;//logic

    printf("The Simple Interest is :: %.2f \n",SimpleInterest);//printing the output with 2 decimal places
    printf("............................................\n");
    printf("HEET MEHTA 24CE064");
    return 0;

}
