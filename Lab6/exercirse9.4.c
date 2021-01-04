#include<stdio.h>
#include<conio.h>

int main()
{
	int n=5, i, j, k;
	char ch;
	printf("Please choose (a/b): ");
	scanf("%c", &ch);
	if(ch=='a')
	{
		for(i=0;i<=n;i++)
		{
			printf("\n");
			for(j=1;j<=i;j++)
			printf("%d", j);
		}
	}
	else if(ch=='b')
	{
		for(i=1;i<=n;i++)
		{
			printf("\n");
			for(j=5;j>=i;j--)
			printf("%d", j);
		}
	}
}
