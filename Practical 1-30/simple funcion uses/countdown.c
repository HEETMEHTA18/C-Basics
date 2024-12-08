#include<stdio.h>
int main(){
    int sec;
    printf("Enter The Start Of timer :: ");
    scanf("%d",&sec);

    for(int i=sec;i>=0;i--){
        sleep(1);
        printf("%d ",i);
        
    }
    printf("\n");
    printf("Countdown Complated...! \n");
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}