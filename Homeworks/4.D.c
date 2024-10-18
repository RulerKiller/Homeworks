#include <stdio.h>

void reverse(int num)
{
    while (num % 10 == 0)
        num /= 10;
    int cnt = 0,number=num,n=0;
    while (num >= 10)
    {
        num /= 10;
        n++;
    }
    //int* str = (int*)malloc(n * sizeof(int));
    int str[10];
    while (number != 0) 
    {
        str[cnt++] = number % 10;
        number /= 10;
    }
    for (int i=0; i<=n; i++)
        printf("%d", str[i]);
    return 0;
}
int main()
{
    int i, number;
    scanf("%d", &i);
    for (; i > 0; i--)
    {
        scanf("%d", &number);
        reverse(number);
        printf(" ");
    }
    return 0;
}