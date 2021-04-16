#include	<stdio.h>
#include	<string.h>
#include	<stdbool.h>

bool isValid(char * s)
{
	int n = strlen(s);

	if (n % 2 != 0)
		return false;

	int i=0,j=0,a=0,b=0,c=0,d=0,e=0,f=0;
	for (i=0;i<n;i++)
	{
		if (s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']' || s[i] == '{' || s[i] == '}')
		{
			if (s[i] == '(')
				a++;
			else if (s[i] == ')')
				b++;
			else if (s[i] == '[')
				c++;
			else if (s[i] == ']')
				d++;
			else if (s[i] == '{')
				e++;
			else if (s[i] == '}')
				f++;

			if (b > a || d > c || f > e)
				return false;
			if (n > 2)
			{
				if ( (s[i] == '(' && s[i+1] == ')') || (s[i] == '[' && s[i+1] == ']') || (s[i] == '{' && s[i+1] == '}'))
				{
					for (j=0;j<n-i;j++)
					{
						s[i+j] = s[i+j+2];
					}
				}	
			}

			printf("ok\n");
			if ( (s[i] == '(' && s[i+1] == ']') || (s[i] == '(' && s[i+1] == '}') )
			{
				return false;
			}
			else if ( (s[i] == '[' && s[i+1] == ')') || (s[i] == '[' && s[i+1] == '}') )
			{
				return false;
			}
			else if ( (s[i] == '{' && s[i+1] == ')') || (s[i] == '{' && s[i+1] == ']') )
			{
				return false;
			}
			else
				continue;
		}
		else
		{
			return false;
		}
	}

	if (a == b && c == d && e == f)
		return true;
	else
		return false;
}

int main(void)
{
	char str[] = {"()[]{}"};
	bool b;
	
	b=isValid(str);
	printf("b = %d\n", b);
}
