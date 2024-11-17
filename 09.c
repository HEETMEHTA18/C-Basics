/* This is a program to Determine the grade of a student based on their marks 
using the conditiona operator and display grade according to their marks. */
#include<stdio.h>
int main(){
    int marks;
    printf("Enter The Marks :: ");
    scanf("%d",&marks);

    if(marks>=0 && marks<=100){
        (marks>=90) ? printf("Garde 'A'. \n") : 
        (marks>=80 && marks<90) ? printf("Grade 'B'. \n") : 
        (marks>=70 && marks<80) ? printf("Grade 'C'. \n") :
        (marks>=60 && marks<70) ? printf("Garde 'D'. \n") : printf("Garde 'F'. \n");
    }
    else{
        printf("Invalid input!Please Enter marks between 0 to 100. \n");
    }
    printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;
}