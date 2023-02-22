#include<stdio.h>

void hoandoi(int a, int b)
{
	do{
		printf("nhap so nguyen ");
		scanf("%d%d",&a,&b);
		printf("hoan doi la %d%d\n",b,a);
	}while(a>0||b>0);
}
int main()
{
	int a,b;
	hoandoi(a,b);
}
