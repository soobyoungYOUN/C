#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	float num1 = FLT_MAX;
	double num2 = 2.225074e-308;
	long double num3 = LLONG_MIN;
	
	printf("%.2f\n", num1);
	printf("%e\n", num2);
	printf("%Le\n", num3);
	return 0;
}
