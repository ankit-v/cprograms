#include <stdio.h>

int main(void)
{
	int bl,nl,tbs;
	int input;
	bl = nl = tbs = 0;
	while((input = getchar()) != EOF)
	{
		if(input == ' ')
			++bl;
		if(input == '\n')
			++nl;
		if(input == '\t')
			++tbs;
	}
	printf("Input has %d Blanks %d Newlines %d Tabs",bl,nl,tbs);

}
