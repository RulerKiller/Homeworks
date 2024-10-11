#include <stdio.h>
int main()
{
    char c;
    while ((c = getchar()) != '.')
    {
        if (c == ' ')
            printf("*");
        else if (c >= 65 && c <= 90)
                printf("%d", c -= 64);
        else if (c >= 97 && c <= 122)
            printf("%d", c -= 96);
    }
    return 0;
}