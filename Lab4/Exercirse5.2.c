#include<stdio.h>

int main()
{
	float cm, inches, feet;
	printf("\n\t***Chuong trinh chuyen doi don vi do***");
	printf("\n\nNhap vao so cm muon doi : ");
	scanf("%f", &cm);
	inches=cm/2.54;
	feet=inches/12;
	printf("\n\n%f cm = %.1f inches = %.1f feet\n", cm, inches, feet);
	printf("\n\t\*\*\*Thank for used Morphine\'s program\!\*\*\*\n");
	getchar();
}
