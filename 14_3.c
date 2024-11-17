#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=4;j>=1;j--){
            if(j>i)printf("  ");
        }
        for(int j=1;j<=4;j++){
          if(i>=j)printf("%c ",j+64);
    }
        for(int j=4;j>=1;j--){
            if(i>=2) {if(i>j)printf("%c ",j+64);}
        }
    printf("\n");
}
printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
return 0;
}