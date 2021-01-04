#include<stdio.h>
<<<<<<< HEAD
#include<conio.h>
=======
#include<string.h>
>>>>>>> 60d7e4c15558ca1ed67974f4daef47e73f979423

void main()
{
	char *ptr;
	char word[10];
<<<<<<< HEAD
	int i, vowcnt=0;
	printf("Enter a word: ");
	scanf("%s", word);
	ptr = &word[0];
	for (i=0; i<strlen(word); i++);
	{
		if((*ptr == 'a') || (*ptr == 'i') || (*ptr == 'u') || (*ptr == 'e') || (*ptr == 'o') || (*ptr == 'A') || (*ptr == 'I') || (*ptr == 'U') || (*ptr == 'E') || (*ptr == 'O'))
		vowcnt++;
		ptr++;
	}
	printf("\nThe word is %s \n The number of vowels in the word is: %d", word, vowcnt);
=======
	int i, vowcnt = 0;
	printf("\nEnter a word: ");
	scanf("%s", word);
	ptr = &word[0];
	for(i = 0; i < strlen(word); i++)
	{
		if((*ptr=='a') || (*ptr=='e') || (*ptr=='i') || (*ptr=='o') || (*ptr=='u') || (*ptr=='A') || (*ptr=='E') || (*ptr=='I') || (*ptr=='O') || (*ptr=='U'))
			vowcnt++;
		ptr++;
	}
	printf("\n The word is: %s \n The number of vowels in the word is: %d", word, vowcnt);
>>>>>>> 60d7e4c15558ca1ed67974f4daef47e73f979423
}
