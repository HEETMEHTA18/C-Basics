#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number :: ");
    scanf("%d",&n);// every row has increasing number of elements w.r.t i
    for(int i=1;i<=n;i++){
            for(int k=1;k<=n;k++){
                if(k>=i)printf("  ");
            }
        for(int j=1;j<=n;j++){
            if(j<=i)printf("%d ",j);
        }
        printf("\n");
    }
    printf("......................................\n");
    printf("HEET MEHTA 24CE064");
    return 0;
}
