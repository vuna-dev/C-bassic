#include<stdio.h>

int tinh(int n)
{
	int i;
	int f1=1,f2=1;
	int f;
	for(i=3;i<=n;i++){
		f=f1+f2;
		f1=f2;
		f2=f;	
	}
	return f;
}
int main()
{
	int n,f;
	printf("nhap n ");
	scanf("%d",&n);
	f = tinh(n);
	printf("ket qua la %d",f);
}
