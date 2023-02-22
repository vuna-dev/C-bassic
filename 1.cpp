#include<stdio.h>

void NhapMang(int arr[100], int n){
for(int i = 0;i < n; ++i){
printf("\nNhap phan tu a[%d] = ", i);
scanf("%d", &arr[i]);
}
}

void XuatMang(int arr[100], int n){
for(int i = 0;i < n; ++i){
printf("\nPhan tu a[%d] = %d", i, arr[i]);
}
}
void daochieu(int arr[100],int n)
{
	int i;
	for(i=0;i<n/2;i++)
	{
	int t = arr[i];
	arr[i] = arr[n-i-1];
	arr[n-i-1] = arr[i];
	printf("%d  ",t);
	}
}
int main()
{
	int arr[100],n;
	printf("n= ");
	scanf("%d",&n);
	NhapMang(arr,n);
//	xuatmang(a,n);
	daochieu(arr,n);
}
