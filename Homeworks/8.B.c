#include <stdio.h>
#include<string.h>

void mySum(int* p, int len, int* sumOdd, int* sumEven)
{
    *sumOdd = 0;
    *sumEven = 0;
    for (int i = 0; i < len; i++)
    {
        if (*(p + i) % 2 == 0)
            *sumEven += *(p + i); 
        else
            *sumOdd += *(p + i); 
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int sumOdd, sumEven;
    mySum(arr, n, &sumOdd, &sumEven);
    printf("%d %d", sumOdd, sumEven);
    return 0;
}