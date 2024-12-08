/* This is program for Raman and Suman, siblings residing in different cities in Karnataka, each own
multiple properties so Determine who possesses the greater total wealth between them or
whether they are equally wealthier. */ 
#include<stdio.h>
int main(){
    int RamanBunglow = 12000000,RamanPlot = 6000000,RamanCar = 3000000,TotalRaman;
    int SumanApartment = 11000000,SumanHotel = 8000000,SumanCar = 8000000,TotalSuman;
    TotalRaman = RamanBunglow + RamanPlot + RamanCar;
    TotalSuman = SumanApartment + SumanHotel + SumanCar;
    if(TotalRaman > TotalSuman){
        printf("Raman is Wealthier than Suman. \n");
    }
    else if(TotalSuman > TotalRaman){
        printf("Suman is Wealthier than Raman. \n");
    }
    else{
        printf("Suman And Raman are equally Wealthier. \n");
    }
   printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}