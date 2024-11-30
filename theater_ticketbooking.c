#include<stdio.h>
int main(){
    int seat[5][10] = {};
    int n,a;
    printf("\n\n Seating Chart : \n");
    for(int i=0;i<5;i++){
        printf("Row %d : ",i+1);
        for(int j=0;j<10;j++){
            if(seat[i][j]>0) printf("x ");
            else printf("%d ",seat[i][j]);
        }
        printf("\n");
    }
    printf("Enter The Number of reserved seat : ");
    scanf("%d",&n);
    a = n+1;
    if(n>=1 && n<=50){
        while(n!=0){
        int r,c;
        printf("Enter row and column of reserved seat %d :: ",a-n);
        scanf("%d %d",&r,&c);
        if(seat[r-1][c-1] == 1){
            printf("Seat is already Reserved Select Another One. \n");
        }
        else if((r>=1 && r<=5)&&(c>=1 && c<=10)){
        seat[r-1][c-1] = 1;
        n--;
            }
        else printf("Invalid Input! Row 1 to 5 & Column 1 to 10. \n");
        }
    }
    printf("\n\nSeating Chart After Booking : \n");
    for(int i=0;i<5;i++){
        printf("Row %d : ",i+1);
        for(int j=0;j<10;j++){
            if(seat[i][j]>0) printf("X ");
            else printf("%d ",seat[i][j]);
        }
        printf("\n");
    }
   printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}