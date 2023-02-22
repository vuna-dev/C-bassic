#include<stdio.h>

float pheptinh(float a, float b)
{
	int n;
	printf("----MENU----\n");
	printf("nhap n=1 thuc hien phep +\n");
	printf("nhap n=2 thuc hien phep -\n");
	printf("nhap n=3 thuc hien phep *\n");
	printf("nhap n=4 thuc hien phep /\n");
	printf("nhap n=");
	scanf("%d",&n);
	printf("nhap a= ");
	scanf("%f",&a);
	printf("nhap b= ");
	scanf("%f",&b);
	switch(n)
	{
		case 1:
			return printf("ket qua cua phep tinh a+b la: %f",a+b);
		break;
		case 2:
			return printf("ket qua cua phep tinh a-b la: %f",a-b);
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

int main()
{
	float a,b,n;
	do{
	pheptinh(a,b);
	}while(&n!=0);
}
