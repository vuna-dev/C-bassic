#include<stdio.h>
#include<math.h>

int main()
{
	float s=0.0;
    float i;
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
        s=s+pow(-1,(i+1))*i;
    }
	printf("ket qua cua phep tinh la: %f",s);
    return 0;
}