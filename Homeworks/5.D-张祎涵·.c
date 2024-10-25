#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	int a[n];

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int x, b;

	scanf("%d", &x);

	if (x < a[0])
	{
		printf("%d ", x);
	}

	else if (x < a[n - 1])
	{
		b = a[n - 1];

		for (int i = 0; i < n - 1; i++)
		{
			if ((a[i] <= x) && (a[i + 1] >= x))
			{

				for (int j = n - 1; j > i + 1; j--)
				{
					a[j] = a[j - 1];
				}
				a[i + 1] = x;
				break;
			}
		}
	}
	else
		b = x;

	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	if (x >= a[0])
		printf("%d", b);
	return 0;
}