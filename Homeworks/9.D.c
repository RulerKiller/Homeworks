#include <stdio.h>

int array(int n, int Str[])
{
    int min = Str[0];
    for (int j = 1; j < n; j++)
        if (min > Str[j])
            min = Str[j];
    return min;
}

typedef struct point
{
    int x;
    int y;
} Point;

int main()
{
    int number, distance[100], min, minx[100], miny[100], count = 0;
    scanf("%d", &number);
    Point coordinates[100];
    for (int i = 0; i < number; i++)
    {
        scanf("%d %d", &coordinates[i].x, &coordinates[i].y);
        distance[i] = coordinates[i].x * coordinates[i].x + coordinates[i].y * coordinates[i].y;
    }
    min = array(number, distance);
    for (int i = 0; i < number; i++)
        if (distance[i] == min)
        {
            minx[count] = coordinates[i].x;
            miny[count] = coordinates[i].y;
            count++;
        }
    if (count == 1)
        printf("(%d,%d)\n", minx[0], miny[0]);
    else
    {
        int min_x = array(count, minx);
        int y_candidates[100];
        int y_count = 0;
        for (int i = 0; i < count; i++)
            if (minx[i] == min_x)
                y_candidates[y_count++] = miny[i];
        if (y_count == 1)
            printf("(%d,%d)\n", min_x, y_candidates[0]);
        else
        {
            int min_y = array(y_count, y_candidates);
            printf("(%d,%d)\n", min_x, min_y);
        }
    }
    return 0;
}