#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	if (x >= 85)
		printf("A\n");
	else if (x >= 70)
		printf("B\n");
	else if (x >= 60)
		printf("C\n");
	else
		printf("D\n");
	return 0;
}