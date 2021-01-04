#include<stdio.h>
#include<conio.h>

int main()
{
	int num[100];
	int i,n;
	int min = 10000;
	int max = 0;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("\nNhap vao gia tri cua phan tu %d:", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=1; i<n; i++)
	{
		if(num[i] < min)
		{
			min = num[i];
			if(num[i] > max)
				max = num[i];
		}
	}
	printf("\nPhan tu nho nhat trong mang la: %d", min);
	printf("\nPhan tu lon nhat trong mang la: %d", max);
	return 0;
}
