#include	<stdio.h>
int main(void)
{
	char str[15];
	for (int i = 0; i < 3; i++)
	{
		str[i] = getchar();
	}
	puts(str);
	return 0;
}
