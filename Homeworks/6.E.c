#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[20][20];
	int i = 1, j = 1;
	a[1][1] = 1;
	for (i = i; i <= n; i++)
	{
		a[i][1] = 1;
		a[i][i] = 1;
		for (j = i + 1; j <= n; j++)
			a[i][j] = 0;
	}
	for (i = 2; i <= n; i++)
		for (j = 2; j <= n; j++)
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}