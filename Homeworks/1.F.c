#include <stdio.h>

int main()
{
    int a, b, i, output;
    scanf("%d%d", &a, &b);
    i = (b - a) / 2 + 1;
    output = (a + b) * i / 2;
    printf("%d", output);
    return 0;
}