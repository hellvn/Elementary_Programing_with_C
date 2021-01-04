#include<stdio.h>

void main()
{
	int ary[10];
	int i, total, high, low;
	for(i=0, total=0; i<10; i++)
	{
		printf("\n Enter value: %d: ", i+1);
		scanf("%d", &ary[i]);
		if(i==0)
		{
			high = ary[0];
			low = ary[0];
			total = total+ary[i];
		}
		else
		{
			 if(ary[i] > high)
			 	high = ary[i];
			 
			 if (ary[i]< low)
				low = ary[i];
			}
	}
	printf("\n Highest value entered was %d", high);
	printf("\n Lowest value entered was %d", low);
	printf("\n The average of the element of ary is %d", total/i);
}
