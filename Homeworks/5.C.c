#include <stdio.h>

int main()
{
    int input, first = 0, second = 0, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        if (input > second)
        {
            if (input > first)
            {
                second = first;
                first = input;
            }
            if (input != first)
                second = input;
        }
    }
    printf("%d", second);
    return 0;
}