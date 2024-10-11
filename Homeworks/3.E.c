#include <stdio.h>

int main()
{
	int i, n = 1;
	float sum = 0;
	for (i = 1; i <= 10; i++)
	{
		n = n * i;
		sum = sum + 1.0 / n;

	}
	printf("%.5f", sum);
	return 0;
}