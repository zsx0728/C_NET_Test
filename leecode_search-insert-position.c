#include	<stdio.h>

int searchInsert(int * nums, int numsSize, int target)
{
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (target == nums[i])
		{
			return i;
		}

		if (target < nums[0]) return 0;

		if (target < nums[i] && target > nums[i-1])
		{
			return i;
		}
	}
	return i;
}

int main(void)
{
	int ch[] = {1,3,5,6};
	int n;
	n = searchInsert(ch, 4, 2);
	printf("%d\n", n);
}
