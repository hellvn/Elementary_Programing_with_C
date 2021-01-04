#include<stdio.h>

void main()
{
	float diem;
	printf("Nhap vao so diem cua ban: ");
	scanf("%f", &diem);
	if(diem >=75)
	{
		printf("\n\nDiem so cua ban la: %.1f", diem);
		printf("\nBan la hoc sinh xuat sac!\nHay tiep tuc phat huy.");
	}
	else if(diem >= 60)
	{
		printf("\n\nDiem so cua ban la: %.1f", diem);
		printf("\nBan la hoc sinh gioi!\nHay co gang tiep tuc phat huy.");
	}
	else if(diem >= 45)
	{
		printf("\n\nDiem so cua ban la %.1f", diem);
		printf("\nBan la hoc sinh kha!\nHay co gang.");
	}
	else if(diem >= 35)
	{
		printf("\n\nDiem so cua ban la %.1f", diem);
		printf("\nBan la hoc sinh trung binh!\nHay co gang that nhieu.");
	}
	else if(diem < 35)
	{
		printf("\n\nDiem so cua ban la %.1f", diem);
		printf("\nBan la cai loai hoc sinh yeu kem!\nHay thoi hoc ve que chan vit.");
	}
		else
			printf("So diem ban nhap khong hop le!");
}
