#include	<stdio.h>
#include	<math.h>

int reverse(int  x)
{
	int bit_count=0,i=0,x1=0;
	int a[32]={0};
	int reverse_num=0;

	if (x >= 0 && x <= pow(2,31)-1)
		x1 = x;
	else if (x < 0 && x > -pow(2,31))
	{
		x1 = -x;
	}
	else
	{
		return reverse_num;
	}

	while ( x1 > 0 )
	{
		a[bit_count] = x1 % 10;
		x1 = x1 / 10;
		bit_count++;
	}

	i = 0;
	while (bit_count > 0)
	{

		if (reverse_num > (pow(2,31)-1)/10)
		{
			reverse_num = 0;
			break;
		}

		reverse_num *= 10;
		reverse_num += a[i];
		bit_count--;
		i++;
	}

	if (x > 0)
		reverse_num /= 1; 
	else
		reverse_num /= -1; 

	return reverse_num;	
}

int main(void)
{
	int num = -2147483412;
	//int num = 1534236469;
	//int num = -2147483648;

	int bak_num=0;
	bak_num = reverse(num);
	printf("bak_num = %d\n", bak_num);
}
