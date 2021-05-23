#include	<stdio.h>
int main(void)
{
	int n = 233;
	char str[100];
	sprintf(str, "%d", n);
	printf("%s\n", str);
	return 0;
}
