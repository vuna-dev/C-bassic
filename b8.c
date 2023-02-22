#include<stdio.h>

float s1(float n)
{
	float i;
	float s=1;
	printf("nhap n=");
	scanf("%f",&n);
	for(i=2;i<=n;i=i+1)
		s+=1/i;
	return printf("ket qua la %f",s);
}
int s2(int n)
{
	int i;
	int s=0;
	printf("nhap n=");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
		s=s+i*i;
	return printf("ket qua la %d",s);
}
int s3(int n)
{
	int i,s1,s2,s;
	s=s1=s2=1;
	printf("nhap n=");
	scanf("%d",&n);
	for(i=3;i<=n;i=i+1)
	{
		s=s1+s2;
		s1=s2;
		s2=s;
	}
	return printf("ket qua la %d",s);
}
int main()
{
	int x;
	printf("-----CHON-----\n");
	printf("nhap 1 de tinh s1\n");
	printf("nhap 2 de tinh s2\n");
	printf("nhap 3 de tinh s3\n");
	printf("nhap: ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		{
			float n;
			s1(n);
		}
		break;
		case 2:
		{
			int n;
			s2(n);
		}
		break;
		case 3:
		{
			int n;
			s3(n);
		}
		break;
		default: printf("khong co trong CHON, nhap lai");
	}
}
