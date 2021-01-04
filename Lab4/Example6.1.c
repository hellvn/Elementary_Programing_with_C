/* This is a simple program which demonstrates how a string can be printed forn within a format command and also as an argument. This program also displays a single character, interger, and float. */
	
#include<stdio.h>

void main()
{
	int a = 10;
	float b = 24.67892345;
	char ch = 'A';
	printf("\nInterger data = %d", a);
	printf("\nFloat data = %f", b);
	printf("\nCharacter = %c", ch);
	printf("\nThis print the string");
	printf("%s", "\nThis also prints a string");
}
