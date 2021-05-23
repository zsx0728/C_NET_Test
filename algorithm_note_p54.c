#include	<stdio.h>
int main(void)
{
	int n;
	double db;
	char str[100] = "2048:3.14,hello", str2[100];
	sscanf(str, "%d:%lf,%s", &n, &db, str2);
	printf("n = %d, db = %.2f, str2 = %s\n", n, db, str2);
	return 0;
}
