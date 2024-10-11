#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
	if (num <= 1) return 0;
	if (num == 2) return 1;
	if (num % 2 == 0) return 0;
	int limit = (int)sqrt((double)num);
	for (int i = 3; i <= limit; i += 2)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int number1, number2, input;
	scanf("%d", &input);
	for (number1 = input; number1 >= 5; number1--)
	{
		if (isPrime(number1))
		{
			number2 = number1 - 2;
			if (isPrime(number2))
			{
				printf("%d %d", number2, number1);
				return 0;
			}
		}
	}
}