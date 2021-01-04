#include<stdio.h>


struct strucintcal
{
	char name[20];
	int numb;
	float amt;
};
void main()
{
	struct strucintcal xyz;
	void intcal(struct strucintcal);
	printf("\nEnter Customer name: ");
	gets(xyz.name);
	printf("\nEnter Customer number: ");
	scanf("%d", &xyz.numb);
	printf("\nEnter Principal amount: ");
	scanf("%f", &xyz.amt);
	intcal(xyz);
	getch();
}

void intcal(struct strucintcal abc)
{
	float si, rate = 5.5, yrs = 2.5;
	si = (abc.amt * rate *yrs) /100;
	printf("\nThe Customer name is %s", abc.name);
	printf("\nThe Customer number is %d",abc.numb);
	printf("\nThe Amount is %f", abc.amt);
	printf("\nThe Interest is %f", si);
	return;
}
 
