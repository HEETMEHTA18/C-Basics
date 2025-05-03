#include <stdio.h>

//swap two balances by this(using pointer)
void swapBalances(float *, float *);

int main() {
    float account1Balance, account2Balance;
    printf("Enter the balance of Account 1: ");
    scanf("%f", &account1Balance);
    printf("Enter the balance of Account 2: ");
    scanf("%f", &account2Balance);
    printf("\nBalances before swapping:\n");
    printf("Account 1 Balance: %.2f\n", account1Balance);
    printf("Account 2 Balance: %.2f\n", account2Balance);
    swapBalances(&account1Balance, &account2Balance);
    printf("\nBalances after swapping:\n");
    printf("Account 1 Balance: %.2f\n", account1Balance);
    printf("Account 2 Balance: %.2f\n", account2Balance);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}
void swapBalances(float *balance1,float *balance2){
    *balance1 = *balance1 + *balance2;
    *balance2 = *balance1 - *balance2;
    *balance1 = *balance1 - *balance2;
}
