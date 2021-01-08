#include <stdio.h>
#define MAX 26
int main(void)
{	int input,i,j ; 
	int freq[MAX];
	for(i= 0 ; i< MAX; i++)
		freq[i] = 0;
	while((input = getchar()) != EOF)
		if(input >= 'a' && input <= 'z') 
			freq[input-'a']++;
		if(input >= 'A' && input <= 'Z')
			freq[input-'A']++;
	//	if(input >= '0')
	for(i = 0 ; i < MAX ; i++)
	{	printf("%d",i+'A');
		
		for(j = freq[i] ; j != 0 ;j-- )
			printf("-");
	
	printf("\n");
	}	
	
}
