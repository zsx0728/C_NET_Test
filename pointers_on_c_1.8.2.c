/*
 * 从标准输入复制到标准输出，并对输出行标号
 */

#include	<stdio.h>
#include	<stdlib.h>

int main()
{
	int	ch;
	int	line;
	int	at_beginning;

	line = 0;
	at_beginning = 1;
	/*
	 * 读取字符并逐个处理它们。
	 */
	while( (ch = getchar()) != EOF )
	{
		/*
		 * 如果我们位于一行的起始位置，打印行号
		 */
		if (at_beginning == 1)
		{
			at_beginning = 0;
			line += 1;
			printf("%d ", line);
		}

		/*
		 * 打印字符，并对行尾进行检查
		 */
		putchar( ch );
		if ( ch == '\n' )
			at_beginning = 1;
	}

	return EXIT_SUCCESS;
}
