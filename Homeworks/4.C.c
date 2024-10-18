#include <stdio.h>

void Gcd(int a, int b)
{
    a %= b;
    if (a != 0)
        return Gcd(b, a);
    else
        printf ("%d",b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    Gcd(a, b);
    return 0;
}