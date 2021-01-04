#include<stdio.h>
#include<string.h>

int main()
{
	char string[60];
	printf("Enter a string: ");
	gets(string);
	strlwr(string);
	printf("Your string in lowercase: %s", string);
	getch();
}
