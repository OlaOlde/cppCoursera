/* Ola Olde
 * Print a table of sin and cosine between (0,1)
 * Jun 29 2022
 */
#include<stdio.h>
#include<math.h>
int main(void)
{
	double value;
	double interval;
	int i;
	printf("x \t\t sin(x) \t cos(x) \n\n"); 
	for(i=0; i<10; i++){
		value = i/10.0;
		printf("%lf \t %lf \t %lf \n", value, sin(value), cos(value));
	}
	return 0;
}

