#include<stdio.h>

int main()
{
	int i=0, n;
	printf("\t\t***CHUONG TRINH 5, 10 ,15 ,20***\nNhap vao so bat ky: ");
	scanf("%d", &n);
	for(i=5;i<=n;i+=5)
	printf("%d\t", i);
}
