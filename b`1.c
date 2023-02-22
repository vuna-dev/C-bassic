#include<stdio.h>
#include<math.h>
// 1+1/2+1/3+...+1/n
int main()
{
	float s=0.0;
    float i;
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
        s=s+1/i;
    }
	printf("ket qua cua phep tinh la: %f",s);
    return 0;
}
