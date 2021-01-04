#include<stdio.h>
#include<string.h>

void main()
{
	char str1[100];
	char str2[100];
	int i, n, temp;
	int len;
	
	printf("Nhap vao chuoi thu nhat: ");
	gets(str1);
	printf("Nhap vao chuoi thu hai: ");
	gets(str2);
	if(checker(str1, str2)==1)
	{
		printf("\nChuoi %s khong xuat hien trong chuoi %s!", str1, str2);
	}
}
int checker(char strc1[100], char strc2[100])
{
	int i, n=0;
	int len = strlen(strc1);
	for(i=0; i<len; i++)
	{
		if(strc1(i) == strc2(i))
		n++;
	}
	if(n>0)
		printf("\nChuoi %s xuat hien trong chuoi %s %d lan!",strc1, strc2, n);
	if(n==0)
		return 1;
}
