#include	<stdio.h>
#include	<string.h>
#define	MAXSIZE 30

void	copy_n(char dst[], char src[], int n);
int main()
{
	char input[MAXSIZE]={0};
	char output[MAXSIZE]={0};
	int i=0, output_number=0;

	for (i=0;i<MAXSIZE;i++)
	{
		scanf("%c", &input[i]);
		if (input[i] == '\n')
			break;
	}
	printf("The strlen input string is %d\n", strlen(input));

	//打印输入数组
	/*
	for (i=0;i<MAXSIZE;i++)
	{
		if (input[i] == '\n')
			break;
		else
			printf("%c", input[i]);
	}
	printf("\n");
	*/

	//截取input数组的n个字符，复制到output数组
	output_number=15;
	copy_n(output, input, output_number);
	for (i=0;i<output_number;i++)
	{
		printf("%c", output[i]);
	}

}

void	copy_n(char dst[], char src[], int n)
{
	int i;

	if (strlen(src) >= n)
	{
		for (i=0;i<n;i++)
		{
			dst[i] = src[i];
		}
	}
	else
	{
		for (i=0;i<strlen(src);i++)
		{
			dst[i] = src[i];
		}

		for (;i<n;i++)
		{
			dst[i] = NULL;
		}
	}
}
