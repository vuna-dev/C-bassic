#include<stdio.h>

int main()
{
	float a,b,c;
	int n;
	printf("nhap a b lan luot:");
	scanf("%f%f",&a,&b);
	printf("nhap phep toan= ");
	scanf("%d",&n);
	switch(n)
	{
		case 1 :
			c=a+b;
			printf("ket qu phep tinh la: %f",c);
			break;
		case 2 :
			c=a*b;
			printf("ket qu phep tinh la: %f",c);
			break;

		case 3 :
			if(b==0)
				printf("ko lam dc");
			else
			{
				c=a/b;
				printf("ket qu phep tinh la: %f",c);
			}
			break;

		case 4 :
			c=a-b;
			printf("ket qu phep tinh la: %f",c);
			break;
		default: printf("ko tinh dc");
	}
	printf("\ndone");
}
