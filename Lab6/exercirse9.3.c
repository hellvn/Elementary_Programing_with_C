#include<stdio.h>
#include<conio.h>

void main()
{
	int f1 = 0;
	int f2 = 1;
	int fn = 1;
	int i, n;
	printf("nhap vao do dai chuoi Fibonacci: ");
	scanf("%d", &n);
	f1 = f2;
	f2 = fn;
	fn = f1 + f2;
	printf("\t%d \t%d \t%d", f1, f2, fn);
	for(i=2;i<=n;i++)
	{
		f1 = f2;
		f2 = fn;
		fn = f1 + f2;
		printf("\t%d", fn);
	}
}
