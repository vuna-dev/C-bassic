#include<stdio.h>
#include<math.h>

int main()
{
	//dau vao
	float a=5,b=6.5,c=4;
	float cv,p,s;
	//xu li
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cv=a+b+c;
	//dau ra
	printf("dien tich la=%f",s);
	printf("\nchu vi la=%f",cv);
}
