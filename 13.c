#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter the size of table vertically :: ");
    scanf("%d",&rows);
    printf("Enter the size of table horizontally :: ");
    scanf("%d",&cols);
    printf("Multiplication Table %d x %d :: \n",rows,cols);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            printf("%4d",i*j);
        }
        printf("\n");
    }
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}