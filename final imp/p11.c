#include<stdio.h>
#include<conio.h>
int main(){
    int person,computer,n=21; // n is matchstcik
    printf("Rules of The Game. \n");
    printf("1. The game starts with 21 matchsticks. \n");
    printf("2. The user is asked to pick 1, 2, 3, or 4 matchsticks. \n");
    printf("3. After the user picks, the computer makes its pick. \n");
    printf("4. The player who is forced to pick the last matchstick loses the game \n");
    while(1){
        if(n==1) {
        printf("You loose \n");
        break;}
        printf("Take A matchstcik :: ");
        scanf("%d",&person);
        if(person>=1 && person<=4){
        printf("You takes %d matchstick \n",person);
        }
        computer  = 5 - person;
        n = n - person - computer;
        printf("Computer takes %d matchstick \n %d matchstick left. \n",computer,n);
    }
 printf("................................\n");
   printf("HEET MEHTA 24CE064");
return 0;
}

