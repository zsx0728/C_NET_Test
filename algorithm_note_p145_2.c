#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>
#include	<math.h>
int main(void)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", (int)(round(1.0*rand() /RAND_MAX*50000 + 10000)));
	}
	return 0;
}
