#include	<stdio.h>

int removeDuplicates(int * nums, int numsSize)
{
	if (numsSize == 0)
		return 0;
	int slow = 0, fast = 0;

	for (fast=0; fast < numsSize; fast++)
	{
		if (nums[slow] != nums[fast])
		{
			slow++;
			nums[slow] = nums[fast];
		}
		//printf("slow = %d, fast = %d, nums[slow] = %d, nums[fast] = %d\n", slow, fast, nums[slow], nums[fast]);
	}
	return slow+1;
}

int main(void)
{
	int nums[] = {};
	int * p = &nums[0];
	int n=0;

	n = removeDuplicates(nums, 0);
	for (int i = 0; i < n ; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}
