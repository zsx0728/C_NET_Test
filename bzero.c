//bzero.c

#include	<string.h>
#include	<stdio.h>

int main()
{
	struct
	{
		int	a;
		//char	s[5];
		float	f;
	}tt;

	char	s[20]="abcdefghijklmnopqrst";

	//bzero(&tt, sizeof(tt));					/* struct initialization to zero */
	printf("%s\n",s);
	printf("\n");
	bzero(s, 1);

	//printf("Initail Success");
	//printf("a=%d, s=%s, f=%d\n", tt.a, tt.s, tt.f);
	printf("s[0]=%c\n",s[0]);
	printf("%c\n",s[1]);
	printf("%c\n",s[2]);
	printf("%c\n",s[3]);
	printf("%c\n",s[4]);

	return 0;
}
