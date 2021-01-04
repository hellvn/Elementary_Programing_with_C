#include<stdio.h>
#include<string.h>

void main()
{
	char name[5][60];
	char pre[60];
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter name %d: ", i+1);
		scanf("%s", name[i]);
	}
	printf("\n\nEnter the prefix: ");
	scanf("%s", pre);
	for(i=0; i<5; i++)
	{
		strcat(name[i], pre);
		printf("Changed name 1:\t%s\n", name[i]);
	}
}
