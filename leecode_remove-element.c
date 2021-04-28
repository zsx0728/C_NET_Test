#include	<stdio.h>

int removeElement(int * nums, int numsSize, int val)
{
	int slow = 0, fast = 0;
	for (;fast < numsSize; fast++)
	{
		if ( nums[fast] != val )
		{
			nums[slow] = nums[fast];
			slow++;
		}
	}
	return slow;
}

int main(void)
{
	//int test[] = {0,1,2,2,3,0,4,2};
	int test[] = {2};
	int n;
	n = removeElement(test, 1, 3);
	printf("%d\n",n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", test[i]);
	}
	printf("\n");
}
