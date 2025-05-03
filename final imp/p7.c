#include<stdio.h>
int main(){
    long RamanBungalow = 12000000, RamanPlot = 6000000, RamanCar = 3000000 ,RamanTotal;//RAMAN ASSETS
    long SumanApartment = 11000000, SumanHotel = 8000000, SumanCar = 8000000,SumanTotal;//SUMAN ASSETS
    RamanTotal = RamanBungalow + RamanPlot + RamanCar;//LOGIC
    SumanTotal = SumanApartment + SumanHotel + SumanCar;
    if(RamanTotal > SumanTotal){
        printf("Raman is wealthier than Suman. \n");
    }
    else if(SumanTotal > RamanTotal){
        printf("Suman is wealthier than Raman. \n");
    }
    else{
        printf("Raman and Suman are equally wealthier. \n");
    }   // IF ELSE STATEMENTS
     printf(".........................................................\n");
    printf("HEET MEHTA 24CE064");
    return 0;
}
