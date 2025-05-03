#include<stdio.h>//ascending order bubble sort
int main(){
    int x;
    printf("Enter The size of Array :: ");
    scanf("%d",&x);
    int a[x],temp=0;
    printf("Enter %d Elements in array :: \n",x);
    for(int i=0;i<x;i++){
    scanf("%d",&a[i]);
    }
    printf("Before Ordering :: ");
    for(int i=0;i<x;i++){
    printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(a[j] < a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("After Ascending  :: ");
    for(int i=0;i<x;i++){
    printf("%d ",a[i]);
    }
    printf("\n");
    printf("......................................\n");
    printf("HEET MEHTA 24CE064");
    return 0;
}
