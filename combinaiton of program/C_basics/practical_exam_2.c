#include<stdio.h>
struct Time{
    int minutes;
}T;
void MintoHrs();
int main()
{
    int Hrs;
    struct Time T;
    printf("Give The Minutes :: ");
    scanf("%d",&T.minutes);
    printf("Given Minutes is ::%d\n",T.minutes);
    MintoHrs(T.minutes);
    return 0;
}

void MintoHrs(struct Time T)
{
    float Hours,Mins;
    Hours=(T.minutes)/60;
    Mins=(T.minutes)%60;
    printf("Hours Of The Given Minutes is:: %.2f Hours and %.2f Minutes",Hours,Mins);
}
