#include <stdio.h>

int main()
{
    float m, money;
    scanf("%f",&m);
    if (m <= 20)
        money = m * 1.68;
    else
        money = m * 1.98;
    printf("%.2f", money);
    return 0;
}