#include<stdio.h>

int main()
{
	int n, i=0;
	scanf("%d", &n);
	for (int j = 1; j <= n; j++)
		if (n % j == 0)
			i++;
	printf("%d", i);
	return 0;
}