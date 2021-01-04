#include<stdio.h>

void main()
{
	int n, i;
	printf("BANG CUU CHUONG VO CUC\nNhap so bat ky: ");
	scanf("%d", &n);
	for(i=2;i<=10;i++)
	{
		printf("\n%d x %d = %d\n", n, i, n*i);
	}
}
