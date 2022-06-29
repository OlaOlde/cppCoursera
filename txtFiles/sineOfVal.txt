/** Sinus of a double 
 * Ola Olde, 2022-06-28
 */
#include<stdio.h>
#include<math.h>
int main(void)
{
	double x;
	double result;
	printf("Insert value between 0 and 1: ");
	scanf("%lf", &x);
	result = sin(x);
	printf("sin of %lf is : %lf \n", x, result);
	return 0; 
}
