//pattern 10 //
#include<stdio.h>
int main(){
    int i,j,m,n;
     printf("Enter The rows :: ");
    scanf("%d",&n);
    printf("Enter The cols :: ");
    scanf("%d",&m);
    for(i=1;i<=n;i++){
        int a = 65;
        for(j=1;j<=m;j++){
            if(i>=j){
                if(i%2!=0){
                printf("%d ",j);
                }
            else{printf("%c ",a);
                a =a + 1; }
                }
        }
            printf("\n");
    }
    return 0;
}