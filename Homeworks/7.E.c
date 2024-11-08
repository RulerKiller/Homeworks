#include<stdio.h>
#include<string.h>

int main()
{
	int length, i, j = 0;
	char str1[9999], str2[9999];
	gets(str1);
	length = strlen(str1);
	for (i = 0; i < length; i++)
	{
		if (str1[i] >= 48 && str1[i] <= 57)
		{
			j++;
			continue;
		}
		str2[i-j] = str1[i];
	}
	for (i = 0; i < length-j; i++)
		printf("%c", str2[i]);
	return 0;
}