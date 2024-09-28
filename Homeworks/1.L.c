#include<stdio.h>

float fact(float n)
{
	if (n == 1 || n == 0)
		return 1;
	return n * fact(n - 1);
}

int main()
{
	float a, b, c, m, n, output;
	scanf("%f%f", &m, &n);
	a = fact(m);
	b = fact(n);
	c = fact(m - n);
	output = a / b / c;
	printf("%.0f", output);
	return 0;
}