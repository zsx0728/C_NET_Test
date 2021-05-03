#include	<stdio.h>
#include	<stdlib.h>

int * plusOne(int * digits, int digitsSize, int * returnSize)
{
	for (int i = digitsSize-1; i >= 0; i--)
	{
		if (digits[i] < 9)
		{
			digits[i]++;
			*returnSize = digitsSize;
			return digits;
		}
		digits[i] = 0;
	}
	int * result = (int *)malloc(sizeof(int) * (digitsSize + 1));
	result[0] = 1;
	for (int i = 1; i < (digitsSize + 1); i++)
	{
		result[i] = 0;
	}
	* returnSize = digitsSize + 1;
	return result;
}

int main(void)
{
	int digits[] = {9,5,5,3,9};
	int number = 0;
	int * num = &number;
	int * a = plusOne(digits, 5, num);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\n");
}
