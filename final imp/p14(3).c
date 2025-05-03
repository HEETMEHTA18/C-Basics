#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number :: ");
    scanf("%d",&n);//prints the A,B,C....Z In fibonaaci order
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf("  ");
            }
        for(int j=1;j<=i;j++){
            printf("%c ",j+64);

        }
        for(int j=n;j>=1;j--){
            if(i>=2 && i>j)printf("%c ",j+64);
        }
        printf("\n");
        }
        printf("......................................\n");
        printf("HEET MEHTA 24CE064");
        return 0;
}

