#include<stdio.h>

void main()
{
	printf("A string in various forms : \n");
	printf("Without any format command : \n");
	printf("Good day Mr. Lee. \n");
	printf("With format command but without any modifier : \n");
	printf("[%s]\n","Good day Mr. Lee.");
	printf("With digit string 4 as modifier : \n");
	ptintf("[%4s]\n","Good day Mr. Lee.");
	printf("With digit string 19 as modifier : \n");
	ptintf("[%19s]\n","Good day Mr. Lee.");
	printf("With digit string 23 as modifier : \n");
	ptintf("[%23s]\n","Good day Mr. Lee.");
	printf("With digit string 25.4 as modifier : \n");
	ptintf("[%25.4s]\n","Good day Mr. Lee.");
	printf("With - and digit string 25.4 as modifier : \n");
	ptintf("[%-25.4s]\n","Good day Mr.shroff.");
}
