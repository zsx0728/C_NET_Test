#include	<stdio.h>
#include	<math.h>
const double eps = 1e-8;
int main(void)
{
	double db1 = 4 * asin(sqrt(2.0) / 2);
	double db2 = 3 * asin(sqrt(3.0) / 2);
	if (db1 == db2)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	if (fabs(db1-db2) < eps)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	return 0;
}
