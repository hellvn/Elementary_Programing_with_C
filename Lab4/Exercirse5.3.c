#include<stdio.h>

int main()
{
	int iResult, a=10, b=8, c=6, d=5, e=2;
	
	printf("iResult = %d\n", a - b - c - d);
	printf("iResult = %d\n", a - b + c - d);
	printf("iResult = %d\n", a + b / c / d);
	printf("iResult = %d\n", a + b / c * d);
	printf("iResult = %d\n", a / b * c * d);
	printf("iResult = %d\n", a % b / c * d);
	printf("iResult = %d\n", a % b % c % d);
	printf("iResult = %d\n", a - (b - c) - d);
	printf("iResult = %d\n", (a - (b - c)) - d);
	printf("iResult = %d\n", a - ((b - c) - d));
	printf("iResult = %d\n", a % (b % c) * d * e);
	printf("iResult = %d\n", a + (b - c) * d - e);
	printf("iResult = %d\n", (a + b) * c + d * e);
	printf("iResult = %d\n", (a + b) * (c / d) % e);
	return 0;
	
}
