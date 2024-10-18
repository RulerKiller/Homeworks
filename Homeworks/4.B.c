#include <stdio.h>
#include <math.h>

int is(int number)
{
	double a, b, c, d;
	a = number / 100;
	b = number / 10 - a * 10;
	c = number % 10;
	d = pow(a, 3) + pow(b, 3) + pow(c, 3);
	if (d != number)
		return 0;
	else
		return 1;
}

int main()
{
	for (int i = 153; i <= 407; i++)
		if (is(i))
			printf("%d\n", i);
	return 0;
}