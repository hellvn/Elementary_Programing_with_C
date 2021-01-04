#include<stdio.h>
#include<conio.h>

int main()
{
	int i=7, j, k;
	for(j=0;j<i;j++)
	{
		printf("\n");
		for(k=7;k>j;k--)
		printf("*");
	}
}
