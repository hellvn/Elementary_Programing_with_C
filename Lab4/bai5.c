#include<stdio.h>

int main()
{
	int top, bottom, height, area;
	printf("***Chuong trinh tinh dien tich hinh thang***\n\n\n");
	printf("Nhap vao day lon cua hinh thang: ");
	scanf("%d", &bottom);
	printf("Nhap vao day nho cua hinh thang: ");
	scanf("%d", &top);
	printf("Nhap vao chieu cao cua hinh thang: ");
	scanf("%d", &height);
	area=((top+bottom)*height)/2;
	printf("Dien tich hinh thang la: %d met vuong!", area);
	return 0;
}
