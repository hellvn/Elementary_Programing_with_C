#include<stdio.h>
#include<conio.h>

int main()
{
	int so1, so2;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &so1);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &so2);
	printf("--------------------------------\n");
	printf("* Hai so ban nhap vao la %d, %d\n", so1, so2);
	printf("* Tong hai so la: %d\n", so1+so2);
	printf("* Hieu hai so la: %d\n", so1-so2);
	printf("* Tich hai so la: %d\n", so1*so2);
	printf("* Thuong hai so la %d\n", so1/so2);
	return 0;
}
