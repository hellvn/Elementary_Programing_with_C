#include<stdio.h>

void main()
{
	int d;
	float f;
	double db;
	char c;
	long int ld;
	long double ldb;
	printf("Nhap vao so nguyen bat ky: ");
	scanf("%d", &d);
	printf("Kieu int: %d bytes.\n So nguyen: %d\n", sizeof(int), d);
	fflush(stdin);
	
	printf("Nhap vao so thuc kieu float bat ky: ");
	scanf("%f", &f);
	printf("Kieu so thuc float: %f bytes.\n So thuc float: %f\n", sizeof(float), f);
	fflush(stdin);
	
	printf("Nhap vao so thuc kieu double bat ky: ");
	scanf("%lf", &db);
	printf("Kieu so thuc double: %lf byte.\n So thuc double: %lf\n", sizeof(double), db);
	fflush(stdin);
	
	printf("Nhap vao ky tu bat ky: ");
	scanf("%c", &c);
	printf("Kieu ky tu: %c byte.\n Ky tu: %c\n", sizeof(char), c);
	fflush(stdin);
	
	printf("Nhap vao so nguyen kieu long int: ");
	printf("%ld", &ld);
	printf("Kieu so nguyen long int: %ld byte.\n So nguyen long int: %ld\n", sizeof(long int));
	fflush(stdin);
	
	return 0;
	
}
