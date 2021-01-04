#include<stdio.h>

int main()
{
	int a, b;
	float c;
	printf("\nNhap vao so a: ");
	scanf("%d", &a);
	printf("\nNhap vao so b: ");
	scanf("%d", &b);
	if(a%b==0)
	 printf("So a chia het cho so b!");
	else
	 printf("so a khong chia het cho b!");
	return 0;
}
