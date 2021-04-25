#include	<stdio.h>
#include	<stdlib.h>
#include	<ctype.h>

typedef struct
{
	int *base;
	int *top;
}stack;

void push(stack *s, int e)
{
	*(s->top) = e;
	(s->top)++;
}

void pop(stack *s, int *e)
{
	if ((s->base) == (s->top))
		e=NULL;
	else
	{
		*e = *(--(s->top));
	}
}

int gettop(stack *s)
{
	return *((s->top)-1);
}

int isempty(stack *s)
{
	return ((s->base)==(s->top));
}

int elemnum(stack *s)
{
	return (abs((s->base)-(s->top)));
}

int ishigh(char c1, char c2)
{
	if (c1 == '+')
	{
		switch(c2)
		{
			case '+': return 0;
			case '*': return 1;
			case '-': return 0;
			case '/': return 1;
		}
	}

	if (c1 == '-')
	{
		switch(c2)
		{
			case '+': return 0;
			case '*': return 1;
			case '-': return 0;
			case '/': return 1;
		}
	}

	if (c1 == '*')
	{
		switch(c2)
		{
			case '+': return 0;
			case '*': return 0;
			case '-': return 0;
			case '/': return 0;
		}
	}

	if (c1 == '/')
	{
		switch(c2)
		{
			case '+': return 0;
			case '*': return 0;
			case '-': return 0;
			case '/': return 0;
		}
	}
	if (c1 == '(')
		return 1;
}

int calcpro(int a, int b, int ch)
{
	switch(ch)
	{
		case '+': return (a+b);
		case '-': return (a-b);
		case '*': return (a*b);
		case '/': return (a/b);
	}
}

int main(void)
{
	stack nums, calcs;
	char str[101] = {0};
	while (gets(str) != NULL)
	{
		nums.base = (int *)malloc(100*sizeof(int));
		calcs.base = (int *)malloc(100*sizeof(int));
		nums.top = nums.base;
		calcs.top = calcs.base;
		int c1, c2, n1, n2;

		int len = strlen(str);
		int i, j, k, temp = 0, val = 0;
		int leftflag = 0;
		int rightflag = 0;
		char *p;
		for (i = 0; i < len; i++)
		{
			if (str[i]=='(')
			{
				push(&calcs, '(');
				continue;
			}

		}
	}
}
