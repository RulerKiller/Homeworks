#include<stdio.h>
#include<math.h>

int main()
{
	int input, output;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++)
		if ((i-1) % 10 == 0 || (i-5) % 10 == 0 || (i-6) % 10 == 0)
		{
			int j = pow(i, 2), n = i, count = 0;
			while (n != 0)
			{
				n /= 10;
				count++;
			}
			n = pow(10, count);
			if ((j - i) % n == 0)
				printf("%d ", i);
		}
	return 0;
}