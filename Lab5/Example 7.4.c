/* Doi mot ky thu hoa thanh ky tu thuong*/

#include<stdio.h>

void main()
{
	char c;
	printf("Please enter a character: ");
	scanf("%c", &c);
	
	if (c >= 'A' && c <= 'Z')
		printf("Lower case character = %c", c + 'a' - 'A');
	else
		printf("Character entered is = %c", c);
	
}
