#include <stdio.h>

int main()
{
    int p[100000], i, j=0, m, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &p[i]);
    scanf("%d", &m);
    for (i = 1; i <= n; i++)
    {
        if (p[i] >= m)
            j++;
        if (j == 1)
            printf("%d ", m);
        printf("%d ", p[i]);
    }
    if (j == 0)
        printf("%d", m);
    return 0;
}