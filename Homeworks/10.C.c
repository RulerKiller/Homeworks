#include <stdio.h>

int main()
{
    int str[100], length = 0, x, temp;
    scanf("%d", &temp);
    while (temp > 0)
    {
        str[length++] = temp;
        scanf("%d", &temp);
    }
    scanf("%d", &x);
    for (int j = 0; j < length; j++)
        if (str[j] <= x)
            printf("%d ", str[j]);
    return 0;
}