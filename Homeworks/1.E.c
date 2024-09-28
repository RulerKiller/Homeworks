#include <stdio.h>

int main()
{
    float m, money;
    scanf("%f", &m);
    if (m <= 100)
        money = m * 2;
    else
        money = m + 100;
    printf("%.2f", money);
    return 0;
}