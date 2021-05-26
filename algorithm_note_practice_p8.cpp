#include	<stdio.h>

int cal(long long A, int Da)
{
	int bak=0;
	while (A > 0)
	{
		//printf("A = %d\n", A);
		if (A%10 == Da)
		{
			bak = bak * 10 + Da;
		}
		A /= 10;
	}
	return bak;
}

int main(void)
{
	long long A=0, B=0;
	int Da = 0, Db = 0, Pa=0, Pb=0;

	scanf("%lld %d %lld %d", &A, &Da, &B, &Db);
	Pa = cal(A,Da);
	Pb = cal(B,Db);
	printf("Pa + Pb = %d\n", Pa + Pb);
}
