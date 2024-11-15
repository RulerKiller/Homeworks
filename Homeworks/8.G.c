#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int main()
{
	char s[1000];
	int i, j;
	int a = 1;
	while (true)
	{
		scanf("%s", &s);
		j = strlen(s) - 1;
		for (i = 0; i <= j; i++, j--)
		{
			if (s[i] != s[j])
				 = 0;
			break;
		}
		if (a)
			printf("Yes!\n");
		else
		{
			printf("No!\n");
			break;
		}
	}
	return 0;
}