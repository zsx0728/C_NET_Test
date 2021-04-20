
int maxSubArray(int* nums, int numsSize)
{
	int pre = 0, maxAns = nums[0];
	for (int i = 0;i < numSize; i++)
	{
		pre = fmax(pre + nums[i], nums[i]);
		maxAns = fmax(maxAns, pre);
	}
	return maxAns;
}
