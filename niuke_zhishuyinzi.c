#include	<stdio.h>

int main(void)
{
	long input = 0;
	scanf("%ld", &input);
	long temp = input;
	for (int i = 2; i*i <= temp && i <= input; i++)
	{
		//printf("i = %d, temp = %d, input = %d\n", i, temp, input);
		while (temp % i == 0)
		{
			printf("%d ", i);
			temp /= i;
		}
	}
	if (temp - 1)
		printf("%ld ", temp);
	return 0;
}
