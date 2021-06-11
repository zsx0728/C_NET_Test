#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<unistd.h>
#define	SIZE (100*1024)
int main(void)
{
	char * buf = malloc(SIZE);
	memset(buf, 0x58, SIZE);
	printf("malloc buffer 0x%p\n", buf);
	while (1)
		sleep(10000);
}
