#include<stdio.h>
int savings(int,int,int);
int main(){
    int firstMonth,secondMonth,lastMonth;
    printf("Enter Budget of First Month :: ");
    scanf("%d",&firstMonth);
    printf("Enter Budget of Second Month :: ");
    scanf("%d",&secondMonth);
    printf("Enter the last Month :: ");
    scanf("%d",&lastMonth);
    savings(firstMonth,secondMonth,lastMonth);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}
int savings(int a,int b,int n){
    int c;
    static int count = 0;
    if(n<=0){
         printf("There is No Month Exist which you entered. \n");
         return 0;
    }
    else if(count==n) return 0;
    else if(count==0){
        printf("%d ",a);
        count++;
    }
    else if(count==1){
        printf("%d ",b);
        count++;
    }
    else{
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
        count++;
    }
    return savings(a,b,n);
}