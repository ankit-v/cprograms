#include <stdio.h>

int main(void)
{
	int input;
	int state = 1 ;
	while((input = getchar()) != EOF)
	{	
		if(input == ' ' || input == '\t')		
       			state = 0;		
		else if(state == 0) 
			{
				printf("\n");
				putchar(input);
				state =  1;
			}
		else
		{
		putchar(input);
		}
		
	}	

}
