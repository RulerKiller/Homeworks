#include<stdio.h>
#include<string.h>

int main()
{
	int num, i;
	char str[99];
	scanf("%d", &num);
	for (int j = 0; j < num; j++)
	{
		scanf("%s", &str);
		for (i = 0; str[i]; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else
				str[i] += 32;
		}
		for (i = 0; str[i]; i++)
			printf("%c", str[i]);
		printf("\n");
	}
	return 0;
}
