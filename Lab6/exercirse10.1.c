#include<stdio.h>
#include<conio.h>

void main()
{
	int n, age;
	char name[30];
	printf("Ho va Ten: ");
	fgets(name, sizeof(name), stdin);
	printf("Tuoi: ");
	scanf("%d", &age);
	printf("\n\n");
	for(n=0;n<age;n++)
		puts(name);
	return 0;
}
