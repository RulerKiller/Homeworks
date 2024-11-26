#include  <stdio.h>

typedef struct data
{
    int length;
    int width;
    int height;
}DATA;

int main()
{
    int i, V[3];
    DATA volume[3];
    for (i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &volume[i].length, &volume[i].width, &volume[i].height);
        V[i] = volume[i].length * volume[i].width * volume[i].height;
        printf("%d\n",V[i]);
    }
    return 0;
}