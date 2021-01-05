#include <stdio.h>

int main(void)
{
	int input = 0;
	while((input = getchar()) != EOF)
	{	
		if(input == ' ')
		{
			putchar(' ');
			while((input  = getchar()) != EOF && input == ' ')
		;
			
		}

		if(input != EOF)
		putchar(input);
	}
}
