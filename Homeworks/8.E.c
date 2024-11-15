#include<stdio.h>
#include<string.h>

void del_char(char* str1, char ch)
{
	int length = strlen(str1), i, j=0, str2[9999];
	for (i = 0; i < length; i++)
	{
		if (str1[i] == ch)
		{
			j++;
			continue;
		}
		str2[i - j] = str1[i];
	}
	for (i = 0; i < length - j; i++)
		printf("%c", str2[i]);
}

int main()
{
	char str1[9999], ch;
	scanf("%c", &ch);
	getchar();
	gets(str1);
	del_char(str1, ch);
	return 0;
}