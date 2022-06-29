#include<stdio.h>
#include<math.h>
int main(void)
{
	double interval;
	int i;
	double result;
	for(i = 0; i<30; i++)
	{
		interval = i/10.0;
		result = (sin(interval) >= 0) ? sin(interval) : -sin(interval); 
		printf("sin(%lf) = %lf \n", interval, result);
	}
	return 0;
}
