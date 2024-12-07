#include<stdio.h>
#include<limits.h>
int main(){
    int x;
    printf("Enter The Number of Items :: ");
    scanf("%d",&x);
    int max = INT_MIN;
    int arr[20];
    for(int i=0;i<x;i++){
        printf("Enter Items %d price :: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Before Ordering. \n");
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arr[j] < arr[i]){
                max = arr[j];
                arr[j] = arr[i];
                arr[i] = max;

            }
        }
    }
    printf("\n After Ordering. \n");
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}