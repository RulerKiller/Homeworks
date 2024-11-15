#include <stdio.h>
#include<string.h>

int  find(int* p, int  len, int  num)
{
    for (int i = 0; i < len; i++)
    {
        if (*(p + i) == num)
            return 1;
    }
    return 0;
}

int main()
{
    int n, num;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &num);
    if (find(arr, n, num))
        printf("YES");
    else
        printf("NO");
    return 0;
}