#include	<stdio.h>
#include	<math.h>

int main(void)
{
	int c1 = 0, c2 = 0;
	scanf("%d%d", &c1, &c2);
	int hour, minute, second, total_second;

	if ((c2 - c1) % 100 >= 50)
	{
		total_second = (c2 - c1) / 100 + 1;
	}
	else
	{
		total_second = (c2 - c1) / 100;
	}

	hour = total_second / 3600;
	minute = (total_second - (hour * 3600)) / 60;
	second = total_second - (hour * 3600) - (minute * 60);
	printf("%d:%d:%d\n", hour, minute, second);
}
