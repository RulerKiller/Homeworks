#include <stdio.h>

int main()
{
    int m,n;
    scanf("%d", &n);
    int p[10];
    for (int i=1; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    scanf("%d", &m);
    printf("%d ", m);
    for (int i = 1; i < n ; i++)
        printf("%d ", p[i]);
    return 0;
}