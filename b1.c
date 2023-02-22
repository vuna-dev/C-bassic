#include<stdio.h>
#include<math.h>

float pheptinh(float a, float b)
{
	printf("nhap a= ");
	scanf("%f",&a);
	printf("nhap b= ");
	scanf("%f",&b);
	int n;
	printf("----MENU----\n");
	printf("nhap n=1 thuc hien phep +\n");
	printf("nhap n=2 thuc hien phep -\n");
	printf("nhap n=3 thuc hien phep *\n");
	printf("nhap n=4 thuc hien phep /\n");
	printf("nhap n=");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			return printf("ket qua cua phep tinh a+b la: %f",a+b);
		break;
		case 2:
			return printf("ket qua cua phep tinh a-b la: %f",a+b);
		break;
		case 3:
			return printf("ket qua cua phep tinh a*b la: %f",a*b);
		break;
		case 4:
			if(b==0)
				return printf("b khong the = 0, nhap lai b");
			else
				return printf("ket qua cua phep tinh a/b la: %f",a/b);
		default: printf("khong co trong MENU xin nhap lai");
	}
}
float timsln(float a, float b, float c)
{
	printf("nhap a=");
	scanf("%f",&a);
	printf("nhap b=");
	scanf("%f",&b);
	printf("nhap c=");
	scanf("%f",&c);
	float max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	return printf("so lon nhat trong 3 so la: %f",max);
}
int check(int x)
{
	int i;
	printf("nhap x= ");
	scanf("%d",&x);
	if(x<3)
		return 0;
	for(i=2;i<x;i=i+1)
		if(sqrt(x)-i==0)
			return 1;
	return 0;
}
int kiemtra(int n)
{
	int x;
	n=check(x);
	if(n==0)
		printf("day khong phai la so chinh phuong");
	else 
		printf("day la so chinh phuong");		
}
int main()
{
	int m;
	printf("-----MENU-----\n");
	printf("nhap 1 de thuc hien phep tinh\n");
	printf("nhap 2 de tim so lon nhat\n");
	printf("nhap 3 de kiem tra so chinh phuong\n");
	printf(" chon: ");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			{
				float a,b;
				pheptinh(a,b);
			}
		break;
		case 2:
			{
				float a,b,c;
				timsln(a,b,c);
			}
		break;
		case 3:
			{
				int n;
				kiemtra(n);
			}
		break;
		default: printf("khong co trong MENU xin nhap lai");
	}
}
