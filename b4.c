#include<stdio.h>
#include<math.h>

int main()
{
	int y;
	float x,i,s;
	printf("y=");
	scanf("%d",&y);
	printf("x=");
	scanf("%f",&x);
	s=1;
	for(i=1;i<=y;i=i+1)
		s=s*x;
	printf("ket qua la:%f",s);
	return 0;
}
