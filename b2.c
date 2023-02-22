#include<stdio.h>

//cachs 1
int s1(int n)
{
	int i;
	int s=0;
	for(;;)
	{	
		printf("n= ");
		scanf("%d",&n);
		if(n!=0)
			s=s+n;
		else
			return printf("ket qua la %d\n",s);
	}
}

// cachs 2
int s2(int n)
{
	int i=0;
	int s=0;
	do{
		printf("n= ");
		scanf("%d",&n);
		s=s+n;
	}while(n!=0);
	return printf("ket qua la %d",s);
}
int main()
{
	int n;
	s1(n);
	s2(n);
}
