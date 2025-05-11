#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number :: ");
    scanf("%d",&n);//pattern of 1 and 0
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                if(j%2==0) printf("0 ");
                else printf("1 ");
            }

        }
        printf("\n");
    }
    printf("......................................\n");
    printf("HEET MEHTA 24CE064");

    return 0;
}
