#include <stdio.h>

int main()
{
	int i, j, k, l, sum = 0;
	for (i = 1; i <= 33; i++)
	{
		for (j = 1; j <= 40; j++)
		{
			for (k = 1; k <= 20; k++)
			{
				for (l = 1; l <= 10; l++)
				{
					if (i + j + k + l == 40 && i + 2 * j + 5 * k + 10 * l == 100)
					{
						sum = sum + 1;
					}
				}
			}
		}
	}
	printf("%d", sum);
}