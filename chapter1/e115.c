
#include <stdio.h>

/* function prototyping */
float cel_to_fahr(float);
int main()
{
	float celsius;
	for(celsius = 0 ; celsius <= 1000 ; celsius += 20)
		printf("Celsius = %f OR Fahrenheit = %.1f\n",celsius,cel_to_fahr(celsius));
	return 0;
	

}
float cel_to_fahr(float cel)
{
	float fahr;
	fahr = (9.0/5.0) * cel + 32;
	return fahr;

}
