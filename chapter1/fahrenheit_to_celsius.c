#include <stdio.h>
#define INITIAL 0
#define MAX 1000
#define STEP 10

void main()
{
	int fahr;
	float celsius;
	printf("-------------------------\n");
	printf("|Fahrenheit|\t|Celsius|\n");
	printf("-------------------------\n");
	for(fahr = INITIAL ; fahr <= MAX; fahr=fahr+STEP)
	{
		celsius = (5.0/9.0)*(fahr-32);
		printf("|%10d|\t|%6.3f|\n",fahr,celsius);
	}

}
