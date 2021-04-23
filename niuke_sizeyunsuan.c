#include	<stdio.h>
#include	<string.h>
#include	<ctype.h>

int pos = 0;
int count(char * data)
{
	int result = 0;
	int num_top = 0;
	int num = 0;
	int stack_num[200];
	char flag = '+';

	while (data[pos] != '\0')
	{
		if ((data[pos] == '{') || (data[pos] == '[') || (data[pos] == '('))
		{
			pos++;
			num = count(data);
		}

		while(isdigit(data[pos]))
		{
			num = num * 10 + data[pos] - '0';
			pos++;
		}

		switch(flag)
		{
			case '+':
				stack_num[num_top++] = num; break;
			case '-':
				stack_num[num_top++] = -num; break;
			case '*':
				stack_num[num_top-1] *= num; break;
			case '/':
				stack_num[num_top-1] /= num; break;
			default: break;
		}

		if ((data[pos] == '}') || (data[pos] == ']') || (data[pos] == ')'))
		{
			pos++;
			break;
		}

		flag = data[pos];
		num = 0;
		pos++;
	}

	for (int i = 0; i < num_top; i++)
	{
		result += stack_num[i];
	}

	return result;
}

int main(void)
{
	char data[200];
	int rst = 0;

	while (scanf("%s", data) != EOF)
		rst = count(data);

	printf("%d", rst);
	return 0;
}
