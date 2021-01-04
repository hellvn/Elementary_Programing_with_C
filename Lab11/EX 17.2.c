#include<stdio.h>
#include<conio.h>

int main()
{
	int num[60];
	int i;
	int n=10;
	float avg;
	
	for(i=0; i<n; i++)
	{
		printf("Nhap vao phan tu thu %d: ", i+1);
		scanf("%d", &num[i]);
	}

	avg = sum(num)/n;
	printf("\nTrung binh cong cua %d phan tu la: %.1f", n, avg);
	getch();
}
int sum(int num_arr[])
{
	int i, total; 
	for(i=0, total=0; i<10;i++)
		total += num_arr[i];
	printf("Total : %d", total);
	return total;
}
