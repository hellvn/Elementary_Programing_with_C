#include<stdio.h>

int main()
{
	int a, b;
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("nhap vao so thu hai : ");
	scanf("%d", &b);
	if(a*b>1000)
	 printf("Tich cua hai so lon hon 1000");
	else if(a*b==1000)
	 printf("Tich cua hai so bang 1000");
	else
	 printf("Tich cua hai so nho hon 1000");
	return 0;
	 
}
