#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[100][100];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    int rowMin[100];
    for (int i = 0; i < m; i++)
    {
        rowMin[i] = matrix[i][0];
        for (int j = 1; j < n; j++)
            if (matrix[i][j] < rowMin[i])
                rowMin[i] = matrix[i][j];
    }
    int colMax[100];
    for (int j = 0; j < n; j++)
    {
        colMax[j] = matrix[0][j];
        for (int i = 1; i < m; i++)
            if (matrix[i][j] > colMax[j])
                colMax[j] = matrix[i][j];
    }
    int found = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j])
            {
                printf("%d %d %d\n", i + 1, j + 1, matrix[i][j]);
                found = 1;
            }
    if (!found)
    {
        printf("no find");
    }
    return 0;
}