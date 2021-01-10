#include <stdio.h>
#define MAXLINE 1000

int gets(int maxline);
void printline(int len);
char line[MAXLINE];

int main()
{

	int len;
	int max;
	max = 0;
	while((len = gets(MAXLINE)) > 0)
	{
		printf("Length of Input line is : %d \n",len);
		if(len > 80)	
			printline(len);
	}
	return 0;
}

/*gets : reaf a line into s retunr length */
int gets(int lim)
{
	
	int c, i;
	for(i = 0; i<lim-1 && (c =getchar()) != EOF && c!= '\n';++i)
		line[i] = c;
	if(c == '\n')
	{	line[i] = c;
		i++;
		}
	line[i] = '\0';
	return i;
	

}
void printline(int len)
{
		printf("Line is greater than %d is %s",len,line);
}
