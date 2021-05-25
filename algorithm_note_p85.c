#include	<stdio.h>

int Callatz(int n)
{
	int num=0;
	while (n != 1)
	{
		if (n%2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = (3*n + 1)/2;
		}
		num++;
	}
	return num;
}

int main(void)
{
	int input=5, output;
	output = Callatz(input);
	printf("output = %d\n", output);
}
