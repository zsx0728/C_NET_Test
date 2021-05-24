#include	<stdio.h>
void change(int &x)
{
	x = 1;
}

int main(void)
{
	int x = 10;
	change(x);
	printf("%d\n", x);
	return 0;
}
