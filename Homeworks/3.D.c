#include <stdio.h>

int main()
{
    int N,i;
    double length = 0, high = 100;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        if (i == 0)
            length = 100;
        else
            length += high*2;
        high /= 2;
        
    }
    printf("length=%.4f\nhigh=%.4f\n",length, high);
    return 0;
}