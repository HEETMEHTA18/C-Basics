/* This a program for Foodies restaurant,Due to rush of customers, the waiters
are not able to manage the food supply appropriately to help them, create a menu
ordering system, which allows customers to select the items from the menu and
compute the total cost of their order. 
*/
#include<stdio.h>
int main(){
    int order; //to order
    int Total = 0; // calculating the bill
    printf("[________________________The Menu________________________]\n");
    printf("----------------------------------------------------------\n");
    printf("| Burger       -> 150 Rupees == For Buger press 1        |\n");
    printf("| Pizza        -> 200 Rupees == For Pizza press 2        |\n");
    printf("| Pasta        -> 120 Rupees == For Pasta press 3        |\n");
    printf("| Sandwhich    -> 100 Rupees == For Sandwhich press 4    |\n");
    printf("| French Fries -> 80 rupees  == For French Fries press 5 |\n");
    printf("----------------------------------------------------------\n");
    printf("| Please Kindly Enter 0 when your order is done.         |\n");
    do{
        printf("Enter order number :: ");
        scanf("%d",&order);
        switch(order){
            case 0:
            printf("Order is Complate. \n");
            break;
        case 1:
        printf("Burger Added to cart. \n");
        Total += 150;
        break;
        case 2:
        printf("Pizaa Added to cart. \n");
        Total += 200;
        break;
        case 3:
        printf("Pasta Added to cart. \n");
        Total += 120;
        break;
        case 4:
        printf("Sandwhich Added to cart. \n");
        Total += 100;
        break;
        case 5:
        printf("French Fries Added to cart. \n");
        Total += 80;
        break;
        default:
        printf("Invalid Input! Please Input Proper from menu. \n");
    }}while(order!=0);
    printf("The Total amount of Bill is :: %d\n",Total);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");

    return 0;
}