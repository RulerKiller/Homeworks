#include<stdio.h>
#include<math.h>

int main()
{
	double a, b;
	scanf("%lf", &a);
	if (a == 64)
		printf("18446744073709551615");
	else
	{
		b = pow(2, a);
		printf("%.0f", b);
	}
	return 0;
}