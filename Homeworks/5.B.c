#include <stdio.h>

int main()
{
    int p[1001],n,max=1,min=1000,i;
    scanf("%d", &n);
    for (i=1; i <= n; i++)
    {
        scanf("%d", &p[i]);
        if (p[i] < min)
            min = p[i];
        if (p[i] > max)
            max = p[i];
    }
    printf("%d", max);
    for (i=1; i <= n; i++)
        if (p[i] == max)
            printf(" %d", i);
    printf("\n%d", min);
    for (i=1; i <= n; i++)
        if (p[i] == min)
            printf(" %d", i);
    return 0;
}