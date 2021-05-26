#include	<stdio.h>
int main(void)
{
	int T=0;
	printf("Please input the number of groups\n");
	scanf("%d", &T);
	int a=0, b=0, c=0;

	for (int i = 0; i < T; i++)
	{
		printf("please input the %d group\n", i);
		scanf("%d%d%d", &a, &b, &c);

		if (a + b > c)
		{
			printf("case #%d:true\n", i);
		}
		else
		{
			printf("case #%d:false\n", i);
		}
	}

}
