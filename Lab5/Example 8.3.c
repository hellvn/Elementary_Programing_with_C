#include<stdio.h>
#include<conio.h>

void main()
{
	int num1, num2;
	num1 = 77;
	num2 = 90;
	if (num1 == num2)
		printf("\n The Numbers are equal");
	else if (num1 < num2)
		printf("\n The Lager Number is: %d", num2);
	else
		printf("\n The Lager Number is: %d", num1);
}
