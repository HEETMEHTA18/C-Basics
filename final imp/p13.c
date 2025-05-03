#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter the size of table vertically :: ");
    scanf("%d",&cols);
    printf("Enter the size of table horizontally :: ");
    scanf("%d",&rows);//matrix of elements i and j
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            printf("%3d",i*j);
        }
        printf("\n");
    }
    printf("......................................\n");
    printf("HEET MEHTA 24CE064");
    return 0;
}
