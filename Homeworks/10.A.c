#include<stdio.h>

void Iterative(int n)
{
    if (n == 1)
        printf("0");
    else if (n == 2)
        printf("1");
    else
    {
        double a = 0, b = 1, c;
        for (int i = 2; i < n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%.0f", b);
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    Iterative(n);
    return 0;
}