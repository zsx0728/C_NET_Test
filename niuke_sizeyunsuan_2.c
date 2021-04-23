#include	<stdio.h>
#include	<string.h>

int main(void)
{
	char str[50] = {0};
	scanf("%s", str);

	printf("%s length is %d\n", str, strlen(str));
}
