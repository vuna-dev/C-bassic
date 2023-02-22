#include<stdio.h>

int check(int n)
{
	int j;
	if(n<2)
		return 0;
	for(j=2;j<n;j++)
	{
		if(n%j==0)
			return 0;
	}
	return 1;
}
void insnt(int a, int b)
{
	int i;
	for(i=1+a;i<b;i++)
	{
		if(check(i))
			printf("%d  ",i);
	}
}
int sdx(int n)
{
	int i;
	int s=0;
	do{
		s=s*10+n%10;
		n=n/10;
	}while(n>0);
	return s;
}
int congsnt(int n)
{
	int i;
	int f=0;
	for(i=2;i<=n/2;i++)
	{
		if(check(i))
		{
			if(check(n-i))
			{
				printf("%d=%d+%d\n",n,i,n-i);
				f=1;
			}
		}
	}
}
void menu()
{
	printf("\n-----------MENU-------------");
	printf("\nnhan 1: hien thi tat ca cac so nguyen to giua 2 so");
	printf("\nnhan 2: kiem tra so doi xung trong");
	printf("\nnhan 3: kiem tra 1 so bang tong 2 so nguyen to");
	printf("\nnhan 0: de thoat chuong trinh");
}
int main()
{
		int a,b,n,m;
	do{
		menu();
		printf("\nchon: ");
		scanf("%d",&m);
		switch(m)
		{
			case 1:
				{
				printf("a= ");
				scanf("%d",&a);
				printf("b= ");
				scanf("%d",&b);
				insnt(a,b);	
				}
			break;
			case 2:
				{
					printf("n= ");
					scanf("%d",&n);
					if(n==sdx(n))
						printf("\n%d la so doi xung",n);
					else
						printf("\n%d khong la so doi xung",n);
				}
			break;
			case 3:
				{
					int n;
					printf("n= ");
					scanf("%d",&n);
					congsnt(n);
				}
			break;
		}
	}while(m!=0);
}
