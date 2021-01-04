#include<stdio.h>

int main()
{
	long int n, i, sum=0;
	printf("Enter a integer number: ");
	scanf("%ld", &n);
	while(n!=0)
	{
		i = n % 10;
		sum += i;
		n /=10;
	}
	printf("Sum of the digits of is: %ld", sum);
}
