/*This a program for Home Ministry of Bharat want to calculate the count illiterate men and women of 2024. */
#include <stdio.h>
int main() {
    double total_population = 1441981744; // total popoulation in 2024 
    double women_percentage = 48.4;
    double total_literacy_rate = 85.95;
    double male_literacy_rate = 80.95;
    double female_literacy_rate = 62.84;
    double women_population = (women_percentage / 100) * total_population;
    double men_population = total_population - women_population;
    double literate_men = (male_literacy_rate / 100) * men_population;
    double literate_women = (female_literacy_rate / 100) * women_population;
    double illiterate_men = men_population - literate_men;
    double illiterate_women = women_population - literate_women;

    printf("\nTotal population of Bharat (2024): %.0f\n", total_population);
    printf("Women population: %.0f\n", women_population);
    printf("Men population: %.0f\n\n", men_population);
    printf("Literate men: %.0f\n", literate_men);
    printf("Literate women: %.0f\n\n", literate_women);
    printf("Illiterate men: %.0f\n", illiterate_men);
    printf("Illiterate women: %.0f\n", illiterate_women);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}
