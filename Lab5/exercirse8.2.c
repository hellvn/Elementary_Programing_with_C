#include<stdio.h>
#include<conio.h>

void main()
{
	char op;
	printf("Nhap vao mot ky tu bat ky: ");
	scanf("%c", &op);
	switch (op)
	{
		case 'A':
			printf("\nAda");
		break;
		case 'a':
			printf("\nAda");
		break;
		
		case 'B':
			printf("\nBasic");
		break;
		case 'b':
			printf("\nBasic");
		break;
		
		case 'C':
			printf("\nCOBOL");
		break;
		case 'c':
			printf("\nCOBOL");
		break;
		
		case 'D':
			printf("\ndBASE III");
		break;
		case 'd':
			printf("\ndBASE III");
		break;
		
		case 'F':
			printf("\nFortan");
		break;
		case 'f':
			printf("\nFortan");
		break;
		
		case 'P':
			printf("\nPascal");
		break;
		case 'p':
			printf("\nPascal");
		break;
		
		case 'V':
			printf("\nVisual C++");
		break;
		case 'v':
			printf("\nVisual C++");
		break;
		default:
			printf("\nInvalid Character!");
	}
}
