#include	<stdio.h>
int main(void)
{
	char str1[20];
	char str2[5][10];
	gets(str1);
	for (int i = 0; i < 3; i++)
	{
		gets(str2[i]);
	}
	puts(str1);
	for (int i = 0; i < 3; i++)
	{
		puts(str2[i]);
	}
	return 0;
}
