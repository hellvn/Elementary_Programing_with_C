#include<stdio.h>

int main()
{
	int num[5];
	
	int i;
	int n=5;
	for(i=0; i<n; i++)
	{
		printf("Nhap num %d:", i+1);
		scanf("%d", &num[i]);
	}
	printf("\nMang num dao nguoc:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("num %d: %d\n", i+1, num[i]);
	}
	return 0;
}
