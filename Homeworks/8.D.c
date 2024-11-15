#include<stdio.h>
#include<string.h>

int length(char* s)
{
    int count=0;
    while (*s != '\0')
    {
        s++;
        count++;
    }
    return count;
}

int main()
{
    char s[100];
    int t;
    gets(s);
    t = length(s);
    printf("%d\n", t);
    return 0;
}