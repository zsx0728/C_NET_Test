#include	<stdio.h>
#include	<string.h>
#include	<stdbool.h>

int strStr(char * haystack, char * needle)
{
	int haystack_length = strlen(haystack);
	int needle_length = strlen(needle);
	int i = 0, j = 0;
	
	for (i = 0;i <= haystack_length - needle_length;  i++)
	{
		bool flag = true;
		for (j=0; j < needle_length; j++)
		{
			if (haystack[i+j] != needle[j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			return i;
	}
	//printf("%d %d\n", haystack_length, needle_length);
	return -1;
}

int main(void)
{
	char long_char[] = "hello";
	char short_char[] = "ll";
	char * str1 = &long_char[0];
	char * str2 = &short_char[0];
	int n;
	n = strStr(str1, str2);
	printf("%d\n", n);
}
