#include<stdio.h>

int main()
{
	int a, b;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &b);
	if(a-b==a)
	{
		printf("Hieu bang gia tri %d !", a);
		if(a-b==b)
		 printf("Hieu bang gia tri %d !", b);
	}
	else
	 printf("Hieu khong bang bat ky gia tri nao duoc nhap!");
	return 0;
}
