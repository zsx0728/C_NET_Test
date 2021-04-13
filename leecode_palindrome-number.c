#include	<stdio.h>
#include	<math.h>
#include	<stdbool.h>

bool isPalindrome(int x)
{
	int	a[32]={0};
	int	i = 0,j=0;
	bool	return_value = false;

	if ( x >=0 && x <= pow(2,31)-1 )
	{
		while (x > 0)
		{
			a[i] = x % 10;
			x /= 10;
			i++;
		//	printf("i = %d\n",i);
		}

		while (j < i/2)
		{
			if (a[j] == a[i-1-j])
			{
				j++;
				continue;
			}
			else
				//printf("false\n");
				return return_value;
		}
		return_value = true;
		//printf("true\n");
		return return_value;
	}
	else
		//printf("false\n");
		return	return_value;	
}

int main(void)
{
	int num = 121;
	bool n = isPalindrome(num);
}
