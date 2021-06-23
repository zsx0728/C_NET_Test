void generateP(int index)
{
	if (index == n + 1)
	{
		count++;
		return;
	}

	for (int x = 1; x <= n; x++)
	{
		if (hashTable[x] == false)
		{
			bool flag = true;
			for (int pre = 1; pre < index; pre++)
			{
				if (abs(index - pre) == abs(x - P[pre]))
				{
					flag = false;
					break;
				}
			}

			if (flag)
			{
				P[index] = x;
				hashTable[x] = true;
				generateP(index + 1);
				hashTable[x] = false;
			}
		}
	}
}
