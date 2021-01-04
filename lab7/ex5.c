#include<stdio.h>
#include<string.h>

int main()
{
	char cardidr[] = "123";
	char passr[] = "123";
	char cardid[20];
	char pass[20];
	char ans;
	int balance=0;
	int withdrawal;
	int recharge;
	int count =0;
	int choose;
	printf("\t\t\t***MORPHINE BANK***\n\n");
	
	do
	{
		if(count>0 && count <=5)
			printf("\nCard ID or Password incorrect (%d)\n", count);
		else if(count>=5)
		{
			printf("\n\nYou have entered more than 5 wrong attempts Account locked!");
			return 0;
		}
			printf("Please insert your card or card ID: ");
			gets(cardid);
			printf("Enter your password: ");
			gets(pass);
			count++;
			
	}
	while(strcmp(cardid, cardidr) !=0 || strcmp(pass, passr) !=0);
	printf("\n\n\t\tLogin success!\n\nYour account balance is: %d USD", balance);
	do
	{
		ans = 'y';
		printf("\n\n1.Withdrawal\n2.Recharge\n");
		printf("Your Choose: ");
		scanf("%d", &choose);
		switch(choose)
		{
			case 1:
				if(balance>0)
				{
					printf("\nEnter the amount: ");
					scanf("%d", &withdrawal);
					balance-=withdrawal;
					printf("You have withdrawn %d USD\nYour account balance is %d USD", withdrawal, balance);
					printf("\nContinue? (Y/N)");
					ans = getch();
				}
				else
				{
					printf("\nYour account balance is not available!\n");
					printf("\nContinue? (Y/N)");
					ans = getch();
					
					
				}
			break;
			case 2:
				printf("\nEnter the amount: ");
				scanf("%d", &recharge);
				balance+=recharge;
				printf("Successful transaction!\n Your account balance is %d USD", balance);
				printf("\nContinue? (Y/N)");
				ans = getch();
		}
	}
	while(ans == 'Y' || ans == 'y');
	return 0;
}
