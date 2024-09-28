#include <stdio.h>

int main()
{
    int i, j, input, output = 0;
    scanf("%d%d", &i, &j);
    while (i>0)
    {
        i--;
        scanf("%d", &input);
        if (input<j)
            output++;
    }
    printf("%d", output);
    return 0;
}