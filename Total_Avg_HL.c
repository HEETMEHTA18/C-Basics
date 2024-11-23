#include<stdio.h>
#include<limits.h>
void total();
void avg();
void high();
void low();
int main(){
    int n; // n is for student
    printf("Enter The Number of students : ");
    scanf("%d",&n);
    printf("Enter The CCp marks of the students : \n");
    int mark[n];
    for(int i=0;i<n;i++){
        printf("Student %d : ",i+1);
        scanf("%d",&mark[i]);
        if(mark[i]<0){ printf("please enter positive marks.\n"); 
        i--;
        }
    }
    total(mark,n);
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
} 
void total(int mark[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans += mark[i];
    }
    printf("Total Marks : %d \n",ans);
    avg(mark,n);
}
void avg(int mark[],int n){
    float avg=0;
    for(int i=0;i<n;i++){
        avg += mark[i];
    }
    avg = avg / n;
    printf("Average marks : %.2f \n",avg);
    high(mark,n);
}
void high(int mark[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(mark[i] > max) max = mark[i];
    }
    printf("Highest Marks : %d \n",max);
    low(mark,n);
}
void low(int mark[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(mark[i] < min) min = mark[i];
    }
    printf("Lowest Marks : %d \n",min);
}