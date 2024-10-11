#include<stdio.h>

int main()
{
    int input, i, j;
    scanf("%d", &input);
    for (i = 2; i <= input; i++)
    {
        int flag = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d\n", i);
    }
}