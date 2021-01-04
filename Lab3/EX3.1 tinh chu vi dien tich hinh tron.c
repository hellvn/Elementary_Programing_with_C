#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	printf("Find the area and perimeter of a circle!\n");
	
	int r;
	float pi;
	pi = 3.14;
	
	printf("Enter the radius of the circle:");
	scanf("%d", &r);
	
	printf("The area of your circle is:\t %f \n", r*r*pi);
	printf("The perimeter of your circle is: \t %f \n", r*2*3.14);
	
	printf("\t\*\*\*Thank for used Morphin's programs!\*\*\*");
	getchar();
}
