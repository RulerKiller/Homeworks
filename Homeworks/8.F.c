#include<stdio.h>
#include<string.h>

void num(char* s)
{
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    while (*s != '\0')
    {
        if (*s >= 65 && *s <= 90)
            count1++;
        else if (*s >= 97 && *s <= 122)
            count1++;
        else if (*s >= 48 && *s <= 57)
            count2++;
        else if (*s == 32)
            count3++;
        else
            count4++;
        s++;
    }
    printf("%d %d %d %d", count1, count2, count3, count4);
}

int main()
{
    char s[100];
    gets(s);
    int t;
    num(s);
    return 0;
}