#include<stdio.h>

struct inventory
{
	char name[20];
	int numb;
	int rate;
	int quantity;
};

void main()
{
	struct inventory item[5];
	void total(struct inventory);
	int i;
	for(i=0; i<5; i++)
	{
		printf("\nEnter item name %d: ", i+1);
		scanf("%s", item[i].name);
		printf("Enter %s of number: ", item[i].name);
		scanf("%d", &item[i].numb);
		printf("Enter %s of rate : ", item[i].name);
		scanf("%d", &item[i].rate);
		printf("Enter %s of quantity in stock: ", item[i].name);
		scanf("%d", &item[i].quantity);
		total(item[i]);
	}
//	getch();
}

void total(struct inventory item_1[])
{
//	struct inventory item_1[5];
	int price, i;
	
	for(i=0; i<5; i++)
	{
		price += item_1[i].quantity * item_1[i].rate;
		ptrintf("\nTotal: ", price);
	}

}
