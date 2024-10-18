#include <stdio.h>
#include <math.h>

int prime(int num)
{
	if (num <= 1) return 0;
	if (num == 2) return 1;
	if (num % 2 == 0) return 0;
	int limit = (int)sqrt((double)num);
	for (int i = 3; i <= limit; i += 2)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int input,i,j;
	scanf("%d", &input);
	for (i = 3; i < input; i++)
	{
		j = i + 2;
		if (prime(i) && prime(j))
			printf("%d %d\n", i, j);
	}
	return 0;
}