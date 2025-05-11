#include<stdio.h>
int main(){
    double Population = 1441981744.0;//total population
    double Women = (Population * 48.4) / 100.0;//total women
    double Men = (Population * 51.6) / 100.0;//total men
    double TotalLiteracyRate = (Population * 85.95) / 100.0;//total literacy
    double MaleLiteracy = (Men * 80.95) / 100.0;//male literacy
    double FemaleLiteracy = (Men * 62.84) / 100.0;//female literacy

    printf("The Total Population is :: %.0f \n",Population);//printing statements
    printf("The Total Population of Women are :: %.0f \n",Women);
    printf("The Total Population of Men are :: %.0f \n",Men);
    printf("The Total Literacy of Population is :: %.0f \n",TotalLiteracyRate);
    printf("The Total of Illiterate Men are :: %.0f \n",Men - MaleLiteracy);
    printf("The Total of Illiterate Women are :: %.0f \n",Women - FemaleLiteracy);
    printf("......................................................\n");
    printf("HEET MEHTA 24CE064");


    return 0;
}
