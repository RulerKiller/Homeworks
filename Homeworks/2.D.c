
#include <stdio.h> 
#include <math.h>

int main() 
{
    double a, b, c;
    double r1, r2, d;
    scanf("%lf%lf%lf", &a, &b, &c);
    d = pow(b, 2) - 4 * a * c;
    if (d >= 0.0) 
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("r1=%7.2f\nr2=%7.2f", r1, r2);
    }
    else
    { 
        printf("No real roots!");
    }
    return 0;
}
