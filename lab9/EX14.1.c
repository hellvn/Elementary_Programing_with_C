#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[100];
	int i, len;
	printf("\nNhap vao chuoi bat ky: ");
	gets(str);
	len = strlen(str);
	printf("Chuoi in nguoc:\t");
	for(i = len; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}
