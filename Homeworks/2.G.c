#include <stdio.h>

int main()
{
    double price;
    scanf("%lf", &price);
    if (price < 1000)
        price = 0;
    else if (price >= 1000 && price < 5000)
        price /= 50;
    else
        price /= 20;
    printf("Tax=%.2fyuan", price);
    return 0;
}