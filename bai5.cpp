#include<stdio.h>

void in(int n)
{
	int i;
	printf("nhap n= ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		printf("%d\n",i);
		i=i+1;
}
 void sosanh(int a, int b, int c)
{
 	printf("a= ");
 	scanf("%d",&a);
 	printf("b= ");
 	scanf("%d",&b);
 	printf("c= ");
 	scanf("%d",&c);
 	int max=a;
 	if(max<b)
 		max=b;
 	if(max<c)
 		max=c;
 	int min=a;
 	if(min>b)
 		min=b;
 	if(min>c)
 		min=c;
 	printf("so lon nhat la: %d\n",max);
 	printf("so be nhat la: %d",min);
}
int ucln(int a, int b)
{
	int i;
	printf("a= ");
	scanf("%d",&a);
	printf("b= ");
	scanf("%d",&b);
	for(i=a;i>0;i=i-1)
		if(a%i==0&&b%i==0)
			return printf("ucln la %d\n",i);
}
int bcnn(int a,int b)
{
	int i;
	int c;
	printf("a= ");
	scanf("%d",&a);
	printf("b= ");
	scanf("%d",&b);
	if(a>b)
		c=a;
	else
		c=b;
	for(i=c;i<=a*b;i++)
		if(i%a==0&&i%b==0)
			return printf("bcnn la %d\n",i);
}

int main()
{
	int a,b,c,n;
	printf("-------MENU--------\n");
	printf("chon 1: in cac so tu 0-n\n");
	printf("chon 2: tim so lon nhat be nhat\n");
	printf("chon 3: tim UCLN\n");
	printf("chon 4: tim BCNN\n");
	printf("chon 5: phan tich so nguyen to\n");
	int g;
	printf("chon: ");
	scanf("%d",&g);
	switch(g)
	{
		case 1:
			in(n);
		break;
		case 2:
			sosanh(a,b,c);
		break;
		case 3:
			ucln(a,b);
		break;
		case 4:
			bcnn(a,b);
		break;
		default: printf("khong co trong -MENU-, chon lai");
	}
}
