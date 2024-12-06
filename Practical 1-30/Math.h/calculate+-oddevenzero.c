#include<stdio.h>
int main(){
    int a[25],positive,negative,zero,odd,even;
    positive = negative = zero = odd = even = 0;
    
    for(int i=0;i<25;i++){
        printf("Enter any Integer Number in index %d :: ",i);
        scanf("%d",&a[i]);
    }
    for(int j=0;j<25;j++){
        if(a[j] > 0) {
            positive += 1;
            if(a[j]%2==1) odd+=1;
            if(a[j]%2==0) even+=1;
            }
        if(a[j] < 0) {
            negative += 1;
            if((a[j]*-1)%2==1) odd+=1;
            if((a[j]*-1)%2==0) even+=1;
            }
        if(a[j] == 0){
            zero += 1;
            even += 1;
        };
    }
    printf("There are total %d elements are positive. \n",positive);
    printf("There are total %d elements are negative. \n",negative);
    printf("There are total %d elements are zero. \n",zero);
    printf("There are total %d elements are odd. \n",odd);
    printf("There are total %d elements are even. \n",even);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}