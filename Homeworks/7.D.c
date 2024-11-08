#include<stdio.h>
#include<string.h>

int main()
{
	int num, length, i, j;
	char str1[9999], str2[9999];
	scanf("%d", &num);
	getchar();
	gets(str1);
	length = strlen(str1);
	while (num >= length)
		num -= length;
	for (i = 0; i < length; i++)
	{
		if (i < length - num)
			j = i + num;
		else
			j = i - length+num;
		str2[j] = str1[i];
	}
	for (i = 0; i < length; i++)
		printf("%c", str2[i]);
	return 0;
}