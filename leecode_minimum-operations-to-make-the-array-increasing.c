#include	<stdio.h>

int minOperations(int * nums, int numsSize)
{
	if (numsSize == 1) return 0;

	int i = 0, sum = 0, temp = 0;;
	for (i = 1; i < numsSize; i++)
	{
		if ( nums[i] < 1 + nums[i-1] )
		{
			temp = nums[i-1] + 1 - nums[i];
			sum += temp;
			nums[i] = nums[i-1] + 1;
			//printf("i = %d, nums[i] = %d\n", i, nums[i]);
		}
	}
	return sum;
}

int main(void)
{
	int ch[] = {8};
	int n;
	n = minOperations(ch, 1);
	printf("%d\n", n);
}
