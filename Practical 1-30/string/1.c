#include<stdio.h>
#include<string.h>
int main()
{
    printf("Wlecome to The String FAUCNTION TbLE ");
    char s1[20];
    char s2[20];
    gets(s1);
    gets(s2);
    int a = strcmp(s2,s1);
    printf(" String cmp\n %s",s2);
    return 0;
}