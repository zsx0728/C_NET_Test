#include	<stdio.h>
const int maxn = 100010;
bool hashTable[maxn] = {false};
int main(void)
{
	int n, m, x;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		hashTable[x] = true;
	}

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		if (hashTable[x] == true)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
