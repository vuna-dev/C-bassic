#include<stdio.h>

int main()
{	
//dau vao
int a,b,c,d;
printf("nhap so: ");
scanf("%d",&a);
 //xu li 
 b=a/3600;
 c=(a%3600)/60;
 d=(a%3600)%60;
 //dau ra
 printf("%dh, %dp, %ds",b,c,d);
}
