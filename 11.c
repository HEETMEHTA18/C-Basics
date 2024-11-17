#include<stdio.h>
int main(){
    int person,computer,matchstick;
    printf("Here You Have 21 Matchstick. \n");
    matchstick = 21; // here i game we have 21 matchstick
    printf("Rules of the game. \n");
    printf("1. The game starts with 21 matchsticks. \n");
    printf("2. The user is asked to pick 1, 2, 3, or 4 matchsticks. \n");
    printf("3. After the user picks, the computer makes its pick. \n");
    printf("4. The player who is forced to pick the last matchstick loses the game. \n");

    while(1){
        if(matchstick==1){
            printf("You loose. \n");
            break;
        }
        printf("Pick The Matchstick :: ");
        scanf("%d",&person);
        if(person>=1 && person<=4){
        printf("You take %d matchstick. \n",person);
        computer = 5 - person;
        printf("Computer take %d matchstick. \n",computer);
        matchstick = matchstick - person - computer;
        printf("%d matchstick left. \n",matchstick);
        }
        else{
            printf("Please Select Between 1 to 4. \n");
        }
    }
  printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}