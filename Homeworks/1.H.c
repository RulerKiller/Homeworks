#include <stdio.h>
#include <math.h>

int main()
{
    int input;
    double a,output = 0;
    scanf("%d", &input);
    for (int i = 1; i <= input; i++)
    {
        a = (double)1.0 / i;
        output = output + a * pow(-1, i - 1);
    }
    printf("%.10f", output);
    return 0;
}