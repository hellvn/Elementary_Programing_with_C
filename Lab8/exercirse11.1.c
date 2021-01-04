#include<stdio.h>
#include<string.h>
 
int main() 
{
   char s[7][7];
   char t[7];
   int i, j;
   int size = 7;
   
   for (i = 0; i < size; i++)
    {
   		printf("\nEnter name %d: ", i+1);   	
   		scanf("%s", s[i]);
   	}
   for (i = 1; i < size; i++)
    {
    	for (j = 1; j < size; j++)
		{
        	if (strcmp(s[j - 1], s[j]) > 0)
			{
        		strcpy(t, s[j - 1]);
        		strcpy(s[j - 1], s[j]);
        		strcpy(s[j], t);
        	}
    	}
	}
	printf("\n\nAlphabetical names is: ");
	for (i = 0; i < size; i++)
      printf("\n\n%d.%s", i+1, s[i]);
	return(0);
}
