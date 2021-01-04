#include<stdio.h>

int main()
{
	int c;
	float f;
	printf("*** Chuong trinh doi do C sang do F! ***\n\n\n");
	printf("Nhap vao so do C muon quy doi: ");
	scanf("%d", &c);
	f = 9/5*c+32;
	printf("Ban da doi %d do C thanh %.1f do F!", c, f);
	return 0;
}
