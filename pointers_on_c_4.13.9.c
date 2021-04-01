#include	<stdio.h>

int main()
{
	int	i;
	for (i = 1; i <= 4; i += 1)
	{
		printf("i = %d\n", i);
		switch (i % 2){
		case 0:
			printf("even\n");
		case 1:
			printf("odd\n");
		}
	}
}
