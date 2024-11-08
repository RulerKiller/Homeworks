#include<stdio.h>
#include<string.h>

void turn(char c)
{
	if (c >= 'A' && c <= 'Z')
		printf("%c", c);
	else if (c >= 'a' && c <= 'z')
		printf("%c", c - 32);
}

int main()
{
	int num, length;
	char str[256];
	scanf("%d", &num);
	getchar();
	for (int j = 0; j < num; j++)
	{
		gets(str);
		length = strlen(str);
		turn(str[0]);
		for (int i = 1; i < length; i++)
			if (str[i] == ' ')
				turn(str[i + 1]);
		printf("\n");
	}
	return 0;
}