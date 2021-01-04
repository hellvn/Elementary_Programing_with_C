#include<stdio.h>

void main()
{
	char alpha[26];
	int i, j;
	printf("\t\t\t\t\t\t\t***ASCII***\n\n");
	
	for(i=97, j=0; i<=122; i++, j++)
	{
		alpha[j] = i;
			printf("%d.Alt+[%d] %c\n", j, i, alpha[j]);
	}
	getch();
}
