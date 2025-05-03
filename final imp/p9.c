#include<stdio.h>
int main(){
    int marks;
    printf("Enter The Marks :: ");
    scanf("%d",&marks);//MARKS
    if(marks>=0 && marks<=100){
        (marks>=90) ? printf("Grade a.\n") :
        (marks>=80 && marks<90) ? printf("Grade B. \n") :
        (marks>=70 && marks<80) ? printf("Grade C. \n") :
        (marks>=60 && marks<70) ? printf("Grade D. \n") :printf("Grade F. \n") ;
    }
    else{
        printf("Invalid Input! \n");
    }//GRADING SYSTEM
   printf(".........................................................\n");
    printf("HEET MEHTA 24CE064");
    return 0;
}
