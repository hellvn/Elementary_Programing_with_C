#include<stdio.h>

void main()
{
	int choice=1, black, brown, matcha, late, milktea, sum=0,i;
	char ans;
	black=20000;
	brown=25000;
	matcha=35000;
	late=35000;
	milktea=25000;
	printf("\t\t\n****MENU****\n");
	printf("\n1.Black coffee\t\t20.000 VND\n2.Coffee with milk\t25.000 VND\n3.Matcha Latte\t\t35.000 VND\n4.Latte\t\t\t35.000 VND\n5.Milk tea\t\t25.000 VND\n6.Finish your order\n");
	do
	{
		printf("Your choice: ");
		scanf("%d", &choice);
		if(choice>=1 && choice <=5)
		{
			printf("\nYou ordered: \n");
			switch(choice)
			{
				case 1:
					printf("Black coffee\n");
					sum+=black;
				break;
				case 2:
					printf("Coffee with milk\n");
					sum+=brown;
				break;
				case 3:
					printf("Matcha\n");
					sum+=matcha;
				break;
				case 4:
					printf("Latte\n");
					sum+=late;
				break;
				case 5:
					printf("Milk Tea\n");
					sum+=milktea;
			}
		}
	}
	while(choice !=6);
		printf("\n\nTotal: %d VND", sum);
}
