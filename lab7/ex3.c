#include<stdio.h>

int main()
{
	int n = 5, i, k;
	for(i = 1; i <= n; i++)
	{
		for(k=1; k <= i; k++)
		printf("%d", k);
		printf("\n");
	}
}
