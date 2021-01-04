#include<stdio.h>
#include<string.h>

void main()
{
	char city[5][60];
	int temp[5];
	int i, j;
	
	for(i=0; i<5; i++)
	{
		printf("\nNhap vao ten thanh pho %d: ", i+1);
		scanf("%s", city[i]);
		for(j=0;j<5; j++)
		{
			printf("Nhap vao nhiet do trung binh nam %d: ", j+2015);
			scanf("%d", &temp[j]);
		}
		printf("\nNhiet do trong 5 nam cua thanh pho %s: ", city[i]);
		printf("\nCao nhat: %d\nThap nhat: %d\n\n", tempmax(temp), tempmin(temp));
	}
}
int tempmax(int temp[])
{
	int i;
	int max=0;
	for(i=0;i<5;i++)
	{
		if(temp[i]>max)
		max = temp[i];
	}
	return (max);
}
int tempmin(int temp[])
{
	int i;
	int min=1000;
	for(i=0; i<5; i++)
	{
		if(temp[i]<min)
		min = temp[i];
	}
	return (min);
}
