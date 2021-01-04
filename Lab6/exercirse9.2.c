#include<stdio.h>
#include<conio.h>

void main()
{
	int num1, num2, i, sum=0;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &num1);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &num2);
	if(num1<num2)
	{
		for(i=num1;i<=num2;i++)
		{
			if(i%2!=0)
			sum+=i;
		}
	}
	if(num1>num2)
	{
		sum+=i;
		for(i=num2;i<=num1;i++)
		{
			if(i%2!=0)
			sum+=i;
		}
	}
	printf("\n\nTong cac so le nam giua %d va %d la:\t%d", num1, num2, sum);
}
