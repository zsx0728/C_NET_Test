#include	<stdio.h>
#include	<string.h>

int lengthOfLastWord(char * s)
{
	int count = 0, i = 0;
	int n = strlen(s);
	//printf("n = %d\n", n);
	for (i = 0; i < n; i++)
	{
		//printf("*(s+%d) == %c\n", i, *(s+i));
		if (s[i] != ' ')
		{
			if (i >=1 && s[i-1] == ' ')
				count = 1;
			else
				count++;
		}
		else if (s[i] == ' ')
		{
			continue;
		}
	}
	return count;
}

int main(void)
{
	char input[] = " ";
	char *s = &input[0];
	int n;

	n = lengthOfLastWord(s);
	printf("%d\n", n);
}
