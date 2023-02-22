#include<stdio.h>

int main()
{
	//dau vào
	int a,b,c,d,e,f,g,h,i,r;
	printf("nhap thoi gian 1:");
	printf("\nnhap gio:");
	scanf("%d",&a);
	printf("nhap phut:");
	scanf("%d",&b);
	printf("nhap giay:");
	scanf("%d",&c);
	printf("nhap thoi gian 2:");
	printf("\nnhap gio:");
	scanf("%d",&d);
	printf("nhap phut:");
	scanf("%d",&e);
	printf("nhap giay:");
	scanf("%d",&f);
	//xu ly
	i=3600*(a+d)+60*(b+e)+c+f;
	h=i/3600;
	g=i%3600/60;
	r=i%3600%60;
	//dau ra
	printf("\nket qua la:%dgio %dphut %dgiay",h,g,r);
}
