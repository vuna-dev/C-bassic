#include<stdio.h>

char ten[20];
void chuoi()
{
	printf("nhap ten nguoi dung: ");
	scanf("%s",&ten);
}
void in()
{
	int a;
	chuoi();
	printf("%s\n",ten);
}
int kiemtra1()
{
	int n,i;
	printf("nhap n= ");
	scanf("%d",&n);
	if(n==1)
		return 1;
	for(i=1;i<=n/2;i++)
	{
		if(i*i==n)
			return 1;
	}
	return 0;
}
void check1()
{
	int a;
	a=kiemtra1();
	if(a==0)
		printf("day khong phai la so chinh phuong\n");
	else 
		printf("day la so chinh phuong\n");
}
int kiemtra2()
{
	int n,i;
	printf("nhap n= ");
	scanf("%d",&n);
	if(n==1)
		return 1;
	for(i=1;i<=n/2;i++)
	{
		if(i*i*i==n)
			return 1;
	}
	return 0;
}
void check2()
{
	int a;
	a=kiemtra2();
	if(a==0)
		printf("day khong phai la so lap phuong\n");
	else 
		printf("day la so lap phuong\n");
}
void menu()
{
	int m;
	printf("----MENU----\n");
	printf("chon 1: in ra ten nguoi dung\n");
	printf("chon 2: kiem tra so chinh phuong\n");
	printf("chon 3: kien tra so lap phuong\n");
	printf("chon 0: de thoat chuong trinh\n");
	printf("chon: ");
	scanf("%d",&m);	
}
int main()
{
	int m;
	do{
		menu();
		switch(m)
		{
			case 1:
				in();
			break;
			case 2:
				check1();
			break;
			case 3:
				check2();
			break;
			default: printf("khong co trong chuong trinh, nhap lai\n");
		}
	}while(m!=0);
}
