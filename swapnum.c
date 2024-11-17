#include<stdio.h>
int main(){
    int a=69,b=143;
    printf("Before swap \n");
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap \n");
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    return 0;
}