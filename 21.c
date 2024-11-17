#include<stdio.h>
#include<math.h>
void IsValid();
void area();
int main(){
    int a,b,c;
    printf("Enter 1st Side of Triangle : ");
    scanf("%d",&a);
    printf("Enter 2nd Side of Triangle : ");
    scanf("%d",&b);
    printf("Enter 3rd Side of Triangle : ");
    scanf("%d",&c);
    IsValid(a,b,c);
   printf(".......................................................\n");
    printf("24CE064-HEET MEHTA");
    return 0;

}
void IsValid(int a,int b,int c){
    if(a+b>c && b+c>a && a+c>b){
        printf("Triangle is Valid.\n");
        area(a,b,c);
    }
    else printf("Triangle is not Valid.\n");
}
void area(int a,int b,int c){
    float s,A;
    s = (a+b+c) / 2.0;
    A = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %.2f. ",A);
}