#include <stdio.h>
#include <string.h>

typedef struct magnate
{
    char name[20];
    double property;
} Magnate;

void cmpfunc(Magnate forbes[], int n)
{
    Magnate temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (forbes[j].property < forbes[j + 1].property)
            {
                temp = forbes[j];
                forbes[j] = forbes[j + 1];
                forbes[j + 1] = temp;
            }
}

int main()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    Magnate forbes[100];
    for (int i = 0; i < number1; i++)
        scanf("%s %lf", forbes[i].name, &forbes[i].property);
    cmpfunc(forbes, number1);
    for (int i = 0; i < number2; i++)
        printf("%s %.2lf\n", forbes[i].name, forbes[i].property);
    return 0;
}