#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    if (x < 10 && x >= 1)
        x = 2 * x - 1;
    else if (x >= 10)
        x = 3 * x - 11;
    printf("y=%.2f", x);
    return 0;
}