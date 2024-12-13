#include<stdio.h>
void england()
{
    printf("You are In england");
    return;
}
void australia()
{
    printf("You are In austrlia");
    england();
    return;
}

void india()
{
    printf("You are In INDIA");
    australia();
    return;
}
int main()
{
    india();
    return 0;
}