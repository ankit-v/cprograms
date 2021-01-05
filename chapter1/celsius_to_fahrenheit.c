#include <stdio.h>
#define INITIAL 0
#define MAX 1000
#define STEP 10
int main()
{
	float celsius;
	for(celsius = INITIAL ; celsius <= MAX ; celsius += STEP )
	{
		printf("%f\t%f\n",celsius,(9.0*celsius/5)+32);
	}

}
