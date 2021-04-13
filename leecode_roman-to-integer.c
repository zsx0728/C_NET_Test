#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

int romanToInt(char * s)
{
	int sum = 0, i = 0;
	//printf("%d\n", strlen(s));
	while (i < strlen(s))
	{
		switch (*(s+i))
		{
			case 'I':
				if (*(s+i+1) == 'V')
				{
					sum += 4;
					i++;
					break;
				}
				else if (*(s+i+1) == 'X')
				{
					sum += 9;
					i++;
					break;
				}
				else
				{
					sum += 1;
					break;
				}
			case 'V':
				sum += 5;
				break;
			case 'X':
				if (*(s+i+1) == 'L')
				{
					sum += 40;
					i++;
					break;
				}
				else if (*(s+i+1) == 'C')
				{
					sum += 90;
					i++;
					break;
				}
				else
				{
					sum += 10;
					break;
				}
			case 'L':
				sum += 50;
				break;
			case 'C':
				if (*(s+i+1) == 'D')
				{
					sum += 400;
					i++;
					break;
				}
				else if (*(s+i+1) == 'M')
				{
					sum += 900;
					i++;
					break;
				}
				else
				{
					sum += 100;
					break;
				}
			case 'D':
				sum += 500;
				break;
			case 'M':
				sum += 1000;
				break;
			default:
				break;
		}
		//printf("sum =  %d\n", sum);
		i++;
	}
	return sum;
}

int main(void)
{
	char	str[] = {"MCMXCIV"};
	int value;

	value = romanToInt(str);
	printf("value = %d\n", value);
}
