#include <stdio.h>

int main()
{
    int i=0,input;
    scanf("%d", &input);
    while (input >= 100)
    {
        input = input - 100;
        i++;
    }
    while (input >= 10)
    {
        input = input - 10;
        i++;
    }
    i = i + input;
    printf("%d", i);
    return 0;
}