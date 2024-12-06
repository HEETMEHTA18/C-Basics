// This a program for State Bank of India wants to calculate the simple interest on savings accounts. //
#include<stdio.h>
int main(){
    int principalAmount = 50000; // Price in Rupees
    float rate = 5.5; // rate is 5.5%
    int time = 3; // time in years
    float simpleInterest; // formula of simple interest is (Principal Amopunt * Rate * Time) / 100
    simpleInterest = (principalAmount * rate * time) / 100.0;
    printf("Simple Interest is :: %.2f\n",simpleInterest); 
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}