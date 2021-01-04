#include<stdio.h>

int main()
{
	float toan, ly, hoa, tong, tbc;
	printf("***Diem Toan, Ly, Hoa va trung binh cong 3 mon***\n\n\n");
	printf("Nhap vao diem mon Toan: ");
	scanf("%f", &toan);
	printf("Nhap vao diem mon Ly: ");
	scanf("%f", &ly);
	printf("Nhap vao diem mon Hoa: ");
	scanf("%f",&hoa);
	tong = toan+ly+hoa;
	tbc = (toan+ly+hoa)/3;
	printf("Tong diem 3 mon Toan, Ly, Hoa la: %.0f\n", tong);
	printf("Trung binh cong 3 mon Toan, Ly, Hoa la: %.1f", tbc);
	return 0;
}
