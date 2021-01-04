#include<stdio.h>

int main()
{
	unsigned long long int n;
	printf("Nhap vao mot so nguyen: ");
	scanf("%llu", &n);
	printf("Giai thua cua %llu la %llu", n, giaithua(n));
	return 0;
}
giaithua(unsigned long long int x)
{
	if(x==1 || x ==0)
		return 1;
	x = x * giaithua(x-1);
	return(x);
}

