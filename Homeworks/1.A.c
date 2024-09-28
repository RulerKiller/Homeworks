#include <stdio.h>

int main ()
{
    float a,b,c;
    scanf("%f%f%f", &a, &b, &c);
    float average = (a + b + c) / 3;
    printf("%.2f",average);
    return 0;
}