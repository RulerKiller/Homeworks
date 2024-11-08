#include<stdio.h>

int sortThreeNumbers(char* a, char* b, char* c)
{
    char temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    printf("%c %c %c\n", *a, *b, *c);
}

int main()
{
	int a, b, c, num, max;
	scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf(" %c %c %c", &a, &b, &c);
        sortThreeNumbers(&a, &b, &c);
    }
	return 0;
}