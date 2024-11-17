#include<stdio.h>
void display();
int value();
void grade(int);
float avg(int [],int);
int main(){
    int n;
    display();
    n = value();
    int mark[n];
    grade(n);
    
    printf("The Avrage Grade of the studnets is : %.2f",avg(mark,n));
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}
void display(){
    printf("Welcome to CHARUSAT University!\n");
    printf("===============================\n");
}
int value(){
    int numberOfStudents;
    printf("Enter the number of studenet's: ");
    scanf("%d",&numberOfStudents);
    return numberOfStudents;
}
void grade(int n){
    int grade;
    printf("Studnet Grade : \n");
    for(int i=1;i<=n;i++){
        printf("Enter the grade for student %d : ",i);
        scanf("%d",&grade);
        printf("Student %d: Grade = %d \n",i,grade);
    }
}
float avg(int m[],int n){
    float x;
    for(int i=0;i<n;i++){
        printf("Enter the grade for student %d (for average calculation) : ",i+1);
        scanf("%d",&m[i]);
        x += m[i];
    }
    x = x / n;
    return x;
}