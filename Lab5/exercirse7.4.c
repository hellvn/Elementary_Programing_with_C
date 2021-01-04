#include<stdio.h>

void main()
{
	char loainv;
	int mucluong;
	printf("Nhap loai nhan vien (vui long nhap bang chu in hoa): ");
	scanf("%c", &loainv);
	printf("Nhap muc luong: ");
	scanf("%d", &mucluong);
	if(loainv=='A')
	{
		printf("\n\nBan la nhan vien loai A, Tien tro cap cua ban la 300!\n");
		printf("Luong cuoi thang cua ban la: %d\n", mucluong+300);
	}
	else if(loainv=='B')
	{
		printf("\n\nBan la nhan vien loai B, Tien tro cap cua ban la 250!\n");
		printf("Luong cuoi thang cua ban la: %d\n", mucluong+250);
	}
	else
	{
		printf("\n\nBan la nhan vien quen, Tien tro cap cua ban la 100! hay co gang hon nua!\n");
		printf("Luong cuoi thang cua ban la: %d\n", mucluong+100);
	}
}
