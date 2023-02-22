#include<stdio.h>
#include<math.h>
void hinhtron(int r)
{
			const float PI=3.1428;
			if(r>0)
			{
				float bankinh, dientich;
				bankinh = (float)2*PI*r;
				dientich = (float)PI*r*r;
			    printf("chu vi hinh tron la: %f", bankinh);
			    printf("\ndien tich cua  hinh tron la: %f \n\n", dientich);
		    }
		    else
		    	if(r=0)
					printf("day la hinh tron diem");
				else
					printf("day khong phai hinh tron");
}

void hinhchunhat(int a , int b)
{
	if(a <= 0 || b <= 0)
				printf("day khong phai hinh chu nhat");
			else
			{
				int chuvi = (a + b)*2;
				int dientich = a*b;
				printf("chuvi cua hinh chu nhat la: %d\ndientich cua hinh chu nhat la: %d",chuvi, dientich);
			}

}

void hinhtamgiac(int a, int b, int c)
{
			double dientich, p, chuvi;
		
			
			if(a>0 && b>0 && b>0 && a+b>c && a+c>b && b+c>a)
			{
			    p=(double)(c+b+a)/2;
				chuvi= p*2;
				dientich= (double)sqrt(p*(p-a)*(p-b)*(p-c));
				printf("\nchu vi: %.3f",chuvi);
				printf("\ndien tich: %.3f",dientich);
				if(a*a+b*b==c*c || a*a + b*b ==c*c || b*b+c*c==a*a)
					printf("\nday la hinh tam giac vuong");
				else
					if(a==b && b==c)
						printf("\nday la hinh tam giac deu");
					else
						if(a==b || b==c || c==a)
							printf("\nday la hinh tam giac can");
						else
							printf("\nday la hinh tam giac thuong");
		    }
		    else
		    	printf("\nday khong phai hinh tan giac");
}

void hinhvuong(int a)
{ 
			int cv=4*a, dt=a*a;
			if(a<=0)
				printf("khong ton tai hinh vuong");
			if(a>0){
			    printf("\nchu vi cua hinh vuong la: %d",cv);
			    printf("\ndien tich cua hinh vuong la %d \n\n", dt);
			}
}

void menu()
{
	printf("-----------MENU---------------\n");
	printf("1 tinh dien tich hinh tron\n");
	printf("2 tinh dien tich hinh chu nhat\n");
	printf("3 tinh dien tich hinh tam giac\n");
	printf("4 tinh dien tich hinh vuong\n");
}
int main()
{
	int n;
	menu();
	printf("nhap n: ");
	scanf("%d",&n);
	do{
	switch(n)
	{
		case 1 :
		{
			//hinh tron
			printf("Bai tap 1: tinh chuvi va dientich cua hinh tron\n");
			int r;
			printf("nhap ban kinh hinh tron bat ky: ");
			scanf("%d",&r);
			hinhtron(r);
			break;
		}
		case 2 :
		{
			int chieudai, chieurong;
			printf("nhap chieu dai:");
			scanf("%d",&chieudai);
			printf("nhap chieu rong:");
			scanf("%d",&chieurong);
			hinhchunhat(chieudai,chieurong);	
			break;
		}
		
		case 3 :
		{
			printf("Bai tap 3: tinh chu vi dien tich tam giac\n");
			int a, b, c;
			printf("so do canh a cua tam giac: ");
			scanf("%d",&a);
			printf("so do canh b cua tam giac: ");
			scanf("%d",&b);
			printf("so do canh c cua tam giac: ");
			scanf("%d",&c);
		    hinhtamgiac(a,b,c);
			break;
		}
		case 4 :
		{
			//hinh vuong
			printf("Bai tap 2: tinh cv dientich hinh vuong\n");
			int a;
			printf("nhap canh hinh vuong: ");
			scanf("%d",&a); 
			hinhvuong(a);
			break;
		}
		case 5: return
			printf("chi nhap so tu 1 den 5");
	}
	}while(n>0&&n<6);		
}

