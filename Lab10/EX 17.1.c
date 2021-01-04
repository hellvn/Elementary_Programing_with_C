#include<stdio.h>
#include<string.h>

void main()
{
	char str1[100];
	char str2[100];
	
	printf("Nhap vao chuoi thu nhat: ");
	gets(str1);
	printf("Nhap vao chuoi thu hai: ");
	gets(str2);
	if(checker(str1, str2)==1)
	{
		printf("\nChuoi %s khong xuat hien trong chuoi %s!", str1, str2);
	}
}
int checker(char str1[100], char str2[100])
{
	int i, n=0;
	int len = strlen(str1);
	for(i=0; i<len; i++)
	{
		if(str1[i] == str2[i])
		n++;
	}
	if(n>0)
		printf("\nChuoi %s co %d ky tu xuat hien trong chuoi %s!",str1, n, str2);
	if(n==0)
		return 1;
}
