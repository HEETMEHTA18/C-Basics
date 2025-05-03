#include<stdio.h>
int main(){
    int arr[25],positive,negative,zero,odd,even;
    positive = negative = odd = even = zero = 0;
    printf("Enter 25 integer value in array. \n");
    for(int i=0;i<25;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<25;i++){
        printf("%d ",arr[i]);
        }
        printf("\n\n");
    for(int i=0;i<25;i++){
        if(arr[i]>0){
            positive += 1;
            if(arr[i] % 2==1) odd += 1;
            else even += 1;
        }
        else if(arr[i]<0){
            negative += 1;
            if((arr[i]*(-1))% 2==1) odd+=1;
            else even +=1;
        }
        else{
            zero += 1;
        }
    }
    printf("Total Positive Elements in array :: %d\n",positive);
    printf("Total Negative Elements in array :: %d\n",negative);
    printf("Total Zero in array :: %d\n",zero);
    printf("Total Odd Elements in array :: %d\n",odd);
    printf("Total Even Elements in array :: %d\n",even);
    printf("......................................\n");
    printf("HEET MEHTA 24CE064");
    return 0;
}
