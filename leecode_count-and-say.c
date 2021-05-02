#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

char * countAndSay(int n)
{
	char * mark = (char *)malloc(sizeof(char) * 5000);
	char * temp = (char *)malloc(sizeof(char) * 5000);
	mark[0] = '1';
	mark[1] = '\0';
	int i, j, count;
	char key, *p;
	for (i = 1; i < n; i++)
	{
		j = 0;
		key = mark[0];
		count = 0;
		p = mark;
		while (*p != '\0')
		{
			if (*p == key)
				count++;
			else
			{
				temp[j++] = count + '0';
				count = 1;
				temp[j++] = key;
				key = *p;
			}
			p++;
		}
		temp[j++] = count+'0';
		temp[j++] = key;
		temp[j] = '\0';
		strcpy(mark, temp);
	}
	return mark;
}

int main(void)
{
	char * p = countAndSay(4);
	for (int i = 0; p[i] != '\0'; i++)
	{
		printf("%c", p[i]);
	}
	printf("\n");
}
