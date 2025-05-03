#include<stdio.h>
int main(){

    int total = 0;
    int order;
    printf("____________________MENU____________________\n");//PRINT STATEMENTS
    printf("Burger       = 150 Rupees for order ->  Put 1 \n");
    printf("Pizza        = 200 Rupees for order ->  Put 2 \n");
    printf("Pasta        = 120 Rupees for order ->  Put 3 \n");
    printf("Sandwich     = 100 Rupees for order ->  Put 4 \n");
    printf("French Fries = 80 Rupees for order ->   Put 5 \n");
    printf("\n Enter 0 When You Want to place the order.\n\n");

    do{
        printf("Enter The Order Number :: ");
        scanf("%d",&order);
        switch(order){
        case 0:
            printf(" Tanks for placing the order.\n");
            break;
        case 1:
            printf("Burger Added to cart. \n");
            total += 150;
            break;
        case 2:
            printf("Pizza Added to cart. \n");
            total += 200;
            break;
        case 3:
            printf("Pasta Added to cart. \n");
            total += 120;
            break;
        case 4:
            printf("Sandwich Added to cart. \n");
            total += 100;
            break;
        case 5:
            printf("French Fries Added to cart. \n");
            total += 80;
            break;
        default:
            printf("Invalid Input. \n");
        }
    }while(order!=0);// DO WHILE LOOP
    printf("\n\nThank You For Visiting \n Your Total is %d.\n\n",total);
    printf(".........................................................\n");
    printf("HEET MEHTA 24CE064");

    return 0;
}
