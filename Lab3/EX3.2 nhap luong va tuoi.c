#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int age;
	float salary;
	
	printf("Nam sinh:");
	scanf("%d", &age);
	
	printf("Luong:");
	scanf("%f", &salary);
	
	printf("Sinh nam: %d\n", age);
	printf("Luong: %f\n", salary);
	printf("\t\*\*\*Thank for used Morphin's programs!\*\*\*");
	getchar();
}
