#include <stdio.h>
#include<string.h>

void myMove(int* p, int len)
{
    int slow = 0, fast = 0;
    while (fast < len)
	{
        if (p[fast] != 0)
		{
            p[slow] = p[fast];
            slow++;
        }
        fast++;
    }
    while (slow < len)
	{
        p[slow] = 0;
        slow++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[99];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    myMove(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
