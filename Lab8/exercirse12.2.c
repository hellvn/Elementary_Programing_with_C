#include<stdio.h>
#include<string.h>

void main()
{
	char wrd[60];
	int i, len;
	int vowl = 0;
	int cons = 0;
	printf("Nhap vao mot tu bat ky (60 ky tu): ");
	scanf("%s", wrd);
	len = strlen(wrd);
	for(i=0; i<len; i++)
	{
		if(wrd[i] == 'a' || wrd[i] == 'i' || wrd[i] == 'u' || wrd[i] == 'e' || wrd[i] == 'o' || wrd[i] == 'A' || wrd[i] == 'I' || wrd[i] == 'U' || wrd[i] == 'E' || wrd[i] == 'O')
			vowl++;
		else
			cons++;
	}
	printf("\nTu %s co %d ky tu\nTrong do co: \n%d nguyen am\n%d phu am", wrd, len, vowl, cons);	
}
