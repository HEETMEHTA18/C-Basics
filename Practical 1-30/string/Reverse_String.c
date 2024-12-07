#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
gets(name);
int i,j;
j=strlen(name);
for(i=0,j=strlen(name)-1;i<j;i++,j--)
{
    char temp=name[j];
    name[j]=name[i];
    name[i]=temp;
}
// puts(A);
printf("%s\n",name);
return 0;

}