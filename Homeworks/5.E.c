#include <stdio.h>

int main()
{
    int p[100000], i, j = 0, m, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &p[i]);
    scanf("%d", &m);
    for (i = 1; i <= n; i++)
    {
        if (p[i] == m)
            j++;
        p[i] = p[i + j];
    }
    if (j == 0)
        printf("no");
    else
    {
        n = n - j;
        for (i = 1; i <= n; i++)
            printf("%d ", p[i]);
    }
    return 0;
}