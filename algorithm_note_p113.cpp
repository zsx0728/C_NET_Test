#include	<stdio.h>
int F(int n)
{
	if (n == 0 || n == 1) return 1;
	else return F(n - 1) + F(n - 2);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", F(n));
	return 0;
}
