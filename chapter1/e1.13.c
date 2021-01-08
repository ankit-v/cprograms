#include <stdio.h>
#define PRINT - 
#define MAX 30
int main(void)
{
	int length[MAX],input;
	int i,ii,j;
	i = ii = j= 0;
	input = 0;
	int size = 0;
	for(i = 0 ; i < MAX; i++)
	{
		length[i] = 0;
	}
	while((input = getchar()) != EOF)
	{	
		size++;
		if(input == ' ' || input =='\n' || input == '\t')
		{	
			length[size-1]++;
			size = 0;
		}
	
	}
	for( i = 1; i < MAX ; i++)
	{
		printf("%2d: ", i);
		j = length[i];
		while (j-- != 0)
			putchar('=');
		putchar('\n');	
	}
}
