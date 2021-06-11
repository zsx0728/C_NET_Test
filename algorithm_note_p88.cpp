#include	<stdio.h>
#include	<stdlib.h>

int main(void)
{
	int n = 0, i = 0, x = 0;
	printf("Please input the total number:\n");
	scanf("%d", &n);
	int * ptr = (int *)malloc(n);
	for (i = 0; i < n; i++)
	{
		printf("Please input the %d location number:\n", i);
		scanf("%d", ptr+i);
	}
	
	printf("Please input the x number:\n");
	scanf("%d", &x);
	for (i=0; i < n; i++)
	{
		if (*(ptr + i) == x)
		{
			printf("%d\n", i);
			return 0;
		}
		else
		{
			continue;
		}
	}
	printf("-1\n");
}
